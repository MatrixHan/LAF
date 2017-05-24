/*
    This file is part of Linux Application Firewall (LAF).

    Linux Application Firewall (LAF) is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    Linux Application Firewall (LAF) is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Linux Application Firewall (LAF).  If not, see <http://www.gnu.org/licenses/>.
*/


/* Takes IP_SRC SRC_PORT, IP_DST DST_PORT and returns a string of the associated binary name with the socket. */
const char* net_to_pid_name(char* ip_src, uint16_t src_port, char* ip_dst, uint16_t dst_port);
/* Convert the reversed HEX IP address to a string */
char* hex_ip_str(char* hex_ip);
/* Takes an I-node number, and returns the name of the binary associated with it */
const char *get_inode_pid_string(unsigned long inode);
/* Parse the PID's FD, returns when it finds a match for the inode. */
int get_pid_inode(char* pid, unsigned long target_inode);
/* Takes a PID and returns it's string name */
const char *get_pid_string(char *pid);
/* Returns the inode of the passed file path */
unsigned long get_inode(char* path);

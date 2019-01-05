/* Automatically generated file; do not edit */
#include <sys/cdefs.h>
__RCSID("$NetBSD: errlist.awk,v 1.4 2010/12/16 22:52:32 joerg Exp $");
#include <errno.h>
static const char *const errlist[] = {
	"Undefined error: 0",			/* 0 - ENOERROR */
	"operation not permitted",		/* 1 - EPERM */
	"no such file or directory",		/* 2 - ENOENT */
	"no such process",			/* 3 - ESRCH */
	"interrupted function call",		/* 4 - EINTR */
	"input/output error",			/* 5 - EIO */
	"no such device or address",		/* 6 - ENXIO */
	"arg list too long",			/* 7 - E2BIG */
	"exec format error",			/* 8 - ENOEXEC */
	"bad file descriptor",			/* 9 - EBADF */
	"no child process",			/* 10 - ECHILD */
	"resource temporarily unavailable",	/* 11 - EAGAIN */
	"not enough space",			/* 12 - ENOMEM */
	"permission denied",			/* 13 - EACCES */
	"bad address",				/* 14 - EFAULT */
	"Extension: not a block special file",	/* 15 - ENOTBLK */
	"resource busy",			/* 16 - EBUSY */
	"file exists",				/* 17 - EEXIST */
	"improper link",			/* 18 - EXDEV */
	"no such device",			/* 19 - ENODEV */
	"not a directory",			/* 20 - ENOTDIR */
	"is a directory",			/* 21 - EISDIR */
	"invalid argument",			/* 22 - EINVAL */
	"too many open files in system",	/* 23 - ENFILE */
	"too many open files",			/* 24 - EMFILE */
	"inappropriate I/O control operation",	/* 25 - ENOTTY */
	"no longer used",			/* 26 - ETXTBSY */
	"file too large",			/* 27 - EFBIG */
	"no space left on device",		/* 28 - ENOSPC */
	"invalid seek",				/* 29 - ESPIPE */
	"read-only file system",		/* 30 - EROFS */
	"too many links",			/* 31 - EMLINK */
	"broken pipe",				/* 32 - EPIPE */
	"domain error    	(from ANSI C std )",	/* 33 - EDOM */
	"result too large	(from ANSI C std )",	/* 34 - ERANGE */
	"resource deadlock avoided",		/* 35 - EDEADLK */
	"file name too long",			/* 36 - ENAMETOOLONG */
	"no locks available",			/* 37 - ENOLCK */
	"function not implemented",		/* 38 - ENOSYS */
	"directory not empty",			/* 39 - ENOTEMPTY */
	"too many levels of symlinks detected",	/* 40 - ELOOP */
	"service restarted",			/* 41 - ERESTART */
	"Undefined error: 42",			/* 42 - UNDEFINED */
	"Identifier removed",			/* 43 - EIDRM */
	"illegal byte sequence",		/* 44 - EILSEQ */
	"No message of desired type",		/* 45 - ENOMSG */
	"Value too large to be stored in data type",/* 46 - EOVERFLOW */
	"Undefined error: 47",			/* 47 - UNDEFINED */
	"Undefined error: 48",			/* 48 - UNDEFINED */
	"Undefined error: 49",			/* 49 - UNDEFINED */
	"invalid packet size for some protocol",/* 50 - EPACKSIZE */
	"not enough buffers left",		/* 51 - ENOBUFS */
	"illegal ioctl for device",		/* 52 - EBADIOCTL */
	"badmode in ioctl",			/* 53 - EBADMODE */
	"call would block on nonblocking socket",/* 54 - EWOULDBLOCK */
	"network unreachable",			/* 55 - ENETUNREACH */
	"host unreachable",			/* 56 - EHOSTUNREACH */
	"already connected",			/* 57 - EISCONN */
	"address in use",			/* 58 - EADDRINUSE */
	"connection refused",			/* 59 - ECONNREFUSED */
	"connection reset",			/* 60 - ECONNRESET */
	"connection timed out",			/* 61 - ETIMEDOUT */
	"urgent data present",			/* 62 - EURG */
	"no urgent data present",		/* 63 - ENOURG */
	"no connection (yet or anymore )",	/* 64 - ENOTCONN */
	"a write call to a shutdown connection",/* 65 - ESHUTDOWN */
	"no such connection",			/* 66 - ENOCONN */
	"address family not supported",		/* 67 - EAFNOSUPPORT */
	"protocol not supported by AF",		/* 68 - EPROTONOSUPPORT */
	"Protocol wrong type for socket",	/* 69 - EPROTOTYPE */
	"Operation now in progress",		/* 70 - EINPROGRESS */
	"Can't assign requested address",	/* 71 - EADDRNOTAVAIL */
	"Connection already in progress",	/* 72 - EALREADY */
	"Message too long",			/* 73 - EMSGSIZE */
	"Socket operation on non-socket",	/* 74 - ENOTSOCK */
	"Protocol not available",		/* 75 - ENOPROTOOPT */
	"Operation not supported",		/* 76 - EOPNOTSUPP */
	"network is down",			/* 77 - ENETDOWN */
	"Protocol family not supported",	/* 78 - EPFNOSUPPORT */
	"Destination address required",		/* 79 - EDESTADDRREQ */
	"Host is down",				/* 80 - EHOSTDOWN */
	"Network dropped connection on reset",	/* 81 - ENETRESET */
	"Socket type not supported",		/* 82 - ESOCKTNOSUPPORT */
	"Software caused connection abort",	/* 83 - ECONNABORTED */
	"Too many references: can't splice",	/* 84 - ETOOMANYREFS */
	"Undefined error: 85",			/* 85 - UNDEFINED */
	"Undefined error: 86",			/* 86 - UNDEFINED */
	"Undefined error: 87",			/* 87 - UNDEFINED */
	"Undefined error: 88",			/* 88 - UNDEFINED */
	"Undefined error: 89",			/* 89 - UNDEFINED */
	"Undefined error: 90",			/* 90 - UNDEFINED */
	"Undefined error: 91",			/* 91 - UNDEFINED */
	"Undefined error: 92",			/* 92 - UNDEFINED */
	"Undefined error: 93",			/* 93 - UNDEFINED */
	"Undefined error: 94",			/* 94 - UNDEFINED */
	"Undefined error: 95",			/* 95 - UNDEFINED */
	"Undefined error: 96",			/* 96 - UNDEFINED */
	"Undefined error: 97",			/* 97 - UNDEFINED */
	"Undefined error: 98",			/* 98 - UNDEFINED */
	"generic error",			/* 99 - EGENERIC */
	"Undefined error: 100",			/* 100 - UNDEFINED */
	"can't send message due to deadlock",	/* 101 - ELOCKED */
	"illegal system call number",		/* 102 - EBADCALL */
	"bad source or destination process",	/* 103 - EBADSRCDST */
	"no permission for system call",	/* 104 - ECALLDENIED */
	"source or destination is not alive",	/* 105 - EDEADSRCDST */
	"source or destination is not ready",	/* 106 - ENOTREADY */
	"destination cannot handle request",	/* 107 - EBADREQUEST */
	"Undefined error: 108",			/* 108 - UNDEFINED */
	"Undefined error: 109",			/* 109 - UNDEFINED */
	"IPC trap not allowed",			/* 110 - ETRAPDENIED */
	"Undefined error: 111",			/* 111 - UNDEFINED */
	"Undefined error: 112",			/* 112 - UNDEFINED */
	"Undefined error: 113",			/* 113 - UNDEFINED */
	"Undefined error: 114",			/* 114 - UNDEFINED */
	"Undefined error: 115",			/* 115 - UNDEFINED */
	"Undefined error: 116",			/* 116 - UNDEFINED */
	"Undefined error: 117",			/* 117 - UNDEFINED */
	"Undefined error: 118",			/* 118 - UNDEFINED */
	"Undefined error: 119",			/* 119 - UNDEFINED */
	"Undefined error: 120",			/* 120 - UNDEFINED */
	"Undefined error: 121",			/* 121 - UNDEFINED */
	"Undefined error: 122",			/* 122 - UNDEFINED */
	"Undefined error: 123",			/* 123 - UNDEFINED */
	"Undefined error: 124",			/* 124 - UNDEFINED */
	"Undefined error: 125",			/* 125 - UNDEFINED */
	"Undefined error: 126",			/* 126 - UNDEFINED */
	"Undefined error: 127",			/* 127 - UNDEFINED */
	"Undefined error: 128",			/* 128 - UNDEFINED */
	"Undefined error: 129",			/* 129 - UNDEFINED */
	"Undefined error: 130",			/* 130 - UNDEFINED */
	"Undefined error: 131",			/* 131 - UNDEFINED */
	"Undefined error: 132",			/* 132 - UNDEFINED */
	"Undefined error: 133",			/* 133 - UNDEFINED */
	"Undefined error: 134",			/* 134 - UNDEFINED */
	"Undefined error: 135",			/* 135 - UNDEFINED */
	"Undefined error: 136",			/* 136 - UNDEFINED */
	"Undefined error: 137",			/* 137 - UNDEFINED */
	"Undefined error: 138",			/* 138 - UNDEFINED */
	"Undefined error: 139",			/* 139 - UNDEFINED */
	"Undefined error: 140",			/* 140 - UNDEFINED */
	"Undefined error: 141",			/* 141 - UNDEFINED */
	"Undefined error: 142",			/* 142 - UNDEFINED */
	"Undefined error: 143",			/* 143 - UNDEFINED */
	"Undefined error: 144",			/* 144 - UNDEFINED */
	"Undefined error: 145",			/* 145 - UNDEFINED */
	"Undefined error: 146",			/* 146 - UNDEFINED */
	"Undefined error: 147",			/* 147 - UNDEFINED */
	"Undefined error: 148",			/* 148 - UNDEFINED */
	"Undefined error: 149",			/* 149 - UNDEFINED */
	"Inappropriate file type or format",	/* 150 - EFTYPE */
	"Authentication error",			/* 151 - EAUTH */
	"Need authenticator",			/* 152 - ENEEDAUTH */
	"Operation canceled",			/* 153 - ECANCELED */
	"Undefined error: 154",			/* 154 - UNDEFINED */
	"Undefined error: 155",			/* 155 - UNDEFINED */
	"Undefined error: 156",			/* 156 - UNDEFINED */
	"Undefined error: 157",			/* 157 - UNDEFINED */
	"Undefined error: 158",			/* 158 - UNDEFINED */
	"Undefined error: 159",			/* 159 - UNDEFINED */
	"Stale NFS file handle",		/* 160 - ESTALE */
	"Too many levels of remote in path",	/* 161 - EREMOTE */
	"RPC struct is bad",			/* 162 - EBADRPC */
	"RPC version wrong",			/* 163 - ERPCMISMATCH */
	"RPC prog. not avail",			/* 164 - EPROGUNAVAIL */
	"Program version wrong",		/* 165 - EPROGMISMATCH */
	"Bad procedure for program",		/* 166 - EPROCUNAVAIL */
	"Undefined error: 167",			/* 167 - UNDEFINED */
	"Undefined error: 168",			/* 168 - UNDEFINED */
	"Undefined error: 169",			/* 169 - UNDEFINED */
	"Bad or Corrupt message",		/* 170 - EBADMSG */
	"Undefined error: 171",			/* 171 - UNDEFINED */
	"Undefined error: 172",			/* 172 - UNDEFINED */
	"Undefined error: 173",			/* 173 - UNDEFINED */
	"Undefined error: 174",			/* 174 - UNDEFINED */
	"Too many processes",			/* 175 - EPROCLIM */
	"Too many users",			/* 176 - EUSERS */
	"Disc quota exceeded",			/* 177 - EDQUOT */
	"Undefined error: 178",			/* 178 - UNDEFINED */
	"Undefined error: 179",			/* 179 - UNDEFINED */
	"Multihop attempted ",			/* 180 - EMULTIHOP */
	"Link has been severed",		/* 181 - ENOLINK */
	"Protocol error",			/* 182 - EPROTO */
	"Undefined error: 183",			/* 183 - UNDEFINED */
	"Undefined error: 184",			/* 184 - UNDEFINED */
	"Attribute not found",			/* 185 - ENOATTR */
	"Undefined error: 186",			/* 186 - UNDEFINED */
	"Undefined error: 187",			/* 187 - UNDEFINED */
	"Undefined error: 188",			/* 188 - UNDEFINED */
	"Undefined error: 189",			/* 189 - UNDEFINED */
	"No message available",			/* 190 - ENODATA */
	"No STREAM resources",			/* 191 - ENOSR */
	"Not a STREAM",				/* 192 - ENOSTR */
	"STREAM ioctl timeout",			/* 193 - ETIME */
	"Undefined error: 194",			/* 194 - UNDEFINED */
	"Undefined error: 195",			/* 195 - UNDEFINED */
	"Undefined error: 196",			/* 196 - UNDEFINED */
	"Undefined error: 197",			/* 197 - UNDEFINED */
	"Undefined error: 198",			/* 198 - UNDEFINED */
	"Undefined error: 199",			/* 199 - UNDEFINED */
	"Undefined error: 200",			/* 200 - UNDEFINED */
	"pseudo-code: don't send a reply",	/* 201 - EDONTREPLY */
	"Undefined error: 202",			/* 202 - UNDEFINED */
	"Undefined error: 203",			/* 203 - UNDEFINED */
	"Undefined error: 204",			/* 204 - UNDEFINED */
	"Undefined error: 205",			/* 205 - UNDEFINED */
	"Undefined error: 206",			/* 206 - UNDEFINED */
	"Undefined error: 207",			/* 207 - UNDEFINED */
	"Undefined error: 208",			/* 208 - UNDEFINED */
	"Undefined error: 209",			/* 209 - UNDEFINED */
	"Undefined error: 210",			/* 210 - UNDEFINED */
	"Undefined error: 211",			/* 211 - UNDEFINED */
	"Undefined error: 212",			/* 212 - UNDEFINED */
	"Undefined error: 213",			/* 213 - UNDEFINED */
	"Undefined error: 214",			/* 214 - UNDEFINED */
	"Undefined error: 215",			/* 215 - UNDEFINED */
	"Undefined error: 216",			/* 216 - UNDEFINED */
	"Undefined error: 217",			/* 217 - UNDEFINED */
	"Undefined error: 218",			/* 218 - UNDEFINED */
	"Undefined error: 219",			/* 219 - UNDEFINED */
	"Undefined error: 220",			/* 220 - UNDEFINED */
	"Undefined error: 221",			/* 221 - UNDEFINED */
	"Undefined error: 222",			/* 222 - UNDEFINED */
	"Undefined error: 223",			/* 223 - UNDEFINED */
	"Undefined error: 224",			/* 224 - UNDEFINED */
	"Undefined error: 225",			/* 225 - UNDEFINED */
	"Undefined error: 226",			/* 226 - UNDEFINED */
	"Undefined error: 227",			/* 227 - UNDEFINED */
	"Undefined error: 228",			/* 228 - UNDEFINED */
	"Undefined error: 229",			/* 229 - UNDEFINED */
	"Undefined error: 230",			/* 230 - UNDEFINED */
	"Undefined error: 231",			/* 231 - UNDEFINED */
	"Undefined error: 232",			/* 232 - UNDEFINED */
	"Undefined error: 233",			/* 233 - UNDEFINED */
	"Undefined error: 234",			/* 234 - UNDEFINED */
	"Undefined error: 235",			/* 235 - UNDEFINED */
	"Undefined error: 236",			/* 236 - UNDEFINED */
	"Undefined error: 237",			/* 237 - UNDEFINED */
	"Undefined error: 238",			/* 238 - UNDEFINED */
	"Undefined error: 239",			/* 239 - UNDEFINED */
	"Undefined error: 240",			/* 240 - UNDEFINED */
	"Undefined error: 241",			/* 241 - UNDEFINED */
	"Undefined error: 242",			/* 242 - UNDEFINED */
	"Undefined error: 243",			/* 243 - UNDEFINED */
	"Undefined error: 244",			/* 244 - UNDEFINED */
	"Undefined error: 245",			/* 245 - UNDEFINED */
	"Undefined error: 246",			/* 246 - UNDEFINED */
	"Undefined error: 247",			/* 247 - UNDEFINED */
	"Undefined error: 248",			/* 248 - UNDEFINED */
	"Undefined error: 249",			/* 249 - UNDEFINED */
	"Undefined error: 250",			/* 250 - UNDEFINED */
	"Undefined error: 251",			/* 251 - UNDEFINED */
	"Undefined error: 252",			/* 252 - UNDEFINED */
	"Undefined error: 253",			/* 253 - UNDEFINED */
	"Undefined error: 254",			/* 254 - UNDEFINED */
	"Undefined error: 255",			/* 255 - UNDEFINED */
	"Undefined error: 256",			/* 256 - UNDEFINED */
	"Undefined error: 257",			/* 257 - UNDEFINED */
	"Undefined error: 258",			/* 258 - UNDEFINED */
	"Undefined error: 259",			/* 259 - UNDEFINED */
	"Undefined error: 260",			/* 260 - UNDEFINED */
	"Undefined error: 261",			/* 261 - UNDEFINED */
	"Undefined error: 262",			/* 262 - UNDEFINED */
	"Undefined error: 263",			/* 263 - UNDEFINED */
	"Undefined error: 264",			/* 264 - UNDEFINED */
	"Undefined error: 265",			/* 265 - UNDEFINED */
	"Undefined error: 266",			/* 266 - UNDEFINED */
	"Undefined error: 267",			/* 267 - UNDEFINED */
	"Undefined error: 268",			/* 268 - UNDEFINED */
	"Undefined error: 269",			/* 269 - UNDEFINED */
	"Undefined error: 270",			/* 270 - UNDEFINED */
	"Undefined error: 271",			/* 271 - UNDEFINED */
	"Undefined error: 272",			/* 272 - UNDEFINED */
	"Undefined error: 273",			/* 273 - UNDEFINED */
	"Undefined error: 274",			/* 274 - UNDEFINED */
	"Undefined error: 275",			/* 275 - UNDEFINED */
	"Undefined error: 276",			/* 276 - UNDEFINED */
	"Undefined error: 277",			/* 277 - UNDEFINED */
	"Undefined error: 278",			/* 278 - UNDEFINED */
	"Undefined error: 279",			/* 279 - UNDEFINED */
	"Undefined error: 280",			/* 280 - UNDEFINED */
	"Undefined error: 281",			/* 281 - UNDEFINED */
	"Undefined error: 282",			/* 282 - UNDEFINED */
	"Undefined error: 283",			/* 283 - UNDEFINED */
	"Undefined error: 284",			/* 284 - UNDEFINED */
	"Undefined error: 285",			/* 285 - UNDEFINED */
	"Undefined error: 286",			/* 286 - UNDEFINED */
	"Undefined error: 287",			/* 287 - UNDEFINED */
	"Undefined error: 288",			/* 288 - UNDEFINED */
	"Undefined error: 289",			/* 289 - UNDEFINED */
	"Undefined error: 290",			/* 290 - UNDEFINED */
	"Undefined error: 291",			/* 291 - UNDEFINED */
	"Undefined error: 292",			/* 292 - UNDEFINED */
	"Undefined error: 293",			/* 293 - UNDEFINED */
	"Undefined error: 294",			/* 294 - UNDEFINED */
	"Undefined error: 295",			/* 295 - UNDEFINED */
	"Undefined error: 296",			/* 296 - UNDEFINED */
	"Undefined error: 297",			/* 297 - UNDEFINED */
	"Undefined error: 298",			/* 298 - UNDEFINED */
	"Undefined error: 299",			/* 299 - UNDEFINED */
	"Undefined error: 300",			/* 300 - UNDEFINED */
	"specified endpoint is bad",		/* 301 - EBADEPT */
	"specified endpoint is not alive",	/* 302 - EDEADEPT */
	"requested CPU does not work",		/* 303 - EBADCPU */
};

const int sys_nerr = sizeof(errlist) / sizeof(errlist[0]);
const char * const *sys_errlist = errlist;

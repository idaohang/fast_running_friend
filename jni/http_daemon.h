#ifndef HTTP_DAEMON_H
#define HTTP_DAEMON_H

int http_run_daemon(JNIEnv* env,jobject* cfg_obj);
void http_stop_deamon();
int http_daemon_running();
#endif
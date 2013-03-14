/**
 * Copyright (c) 2013 Tatsuhiko Kubo <cubicdaiya@gmail.com>
 */

#ifndef NGX_HTTP_MRUBY_HOOK_H
#define NGX_HTTP_MRUBY_HOOK_H

#include <ngx_config.h>
#include <ngx_conf_file.h>
#include <nginx.h>

char *ngx_http_mruby_post_read_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_server_rewrite_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_rewrite_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_access_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_content_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_log_phase(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_post_read_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_server_rewrite_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_rewrite_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_access_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_content_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_mruby_log_inline(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

#endif // NGX_HTTP_MRUBY_HOOK_H

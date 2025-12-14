/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85944
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_10)), (17403532669981630095ULL)))))) ? (var_9) : (2211500598U)));
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3497618355U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_11)))) > (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) ((var_2) && (((/* implicit */_Bool) 1048575U))))))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) min((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_13)))), ((!(((/* implicit */_Bool) -1LL))))))))))));
}

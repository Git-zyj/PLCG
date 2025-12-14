/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84950
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
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_18) : (var_19)))) ? (((/* implicit */unsigned long long int) var_19)) : (2078933101620398092ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_18))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) min((2078933101620398092ULL), (((/* implicit */unsigned long long int) 266338304))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) 2078933101620398092ULL)))))) : (var_9))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_17)) : (3326253264530386305ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (signed char)81)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29160)) != (var_13))))));
            var_24 += ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((var_15) ^ (4574270333402628826LL))) : (var_15)))) : (((((/* implicit */_Bool) ((int) (unsigned char)229))) ? (max((var_2), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 22; i_4 += 2) /* same iter space */
            {
                arr_14 [i_4] [i_3] [i_0] [i_0] = ((/* implicit */short) -6482455949503082565LL);
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483647)) + (var_5)));
            }
            for (signed char i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
            {
                arr_18 [i_5] [i_5] = var_9;
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -266338304)) ? (((/* implicit */int) ((16367810972089153523ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4241)))))) : (((/* implicit */int) (short)-3324)))))));
            }
            arr_19 [(short)1] [(short)1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (var_8))), (((/* implicit */unsigned long long int) (-(-6009055344268481584LL))))));
            var_26 = ((/* implicit */signed char) ((unsigned short) min((0ULL), (((/* implicit */unsigned long long int) (signed char)104)))));
        }
        arr_20 [i_0] [21U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */int) (short)28706)) / (((/* implicit */int) var_14)))))))) ? (((/* implicit */int) ((signed char) var_9))) : (((((/* implicit */_Bool) 330003610U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 420047450))))) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */unsigned long long int) 1155056792)) | (var_0))))));
    var_28 = var_15;
}

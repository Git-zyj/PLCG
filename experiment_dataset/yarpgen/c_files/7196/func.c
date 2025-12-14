/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7196
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
    var_10 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((signed char) (short)3));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_1])))) ? (((13938121732859917462ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (min((((/* implicit */long long int) ((_Bool) var_1))), (((((/* implicit */_Bool) (unsigned short)32704)) ? (9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-38))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32815)))));
                arr_5 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)32838)) ? (13244464087139959732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (var_5))))))), (((/* implicit */unsigned long long int) (-(571504825))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                arr_10 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-15015)), (13938121732859917456ULL)));
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (unsigned short)32718)), (4294967295U))), (((/* implicit */unsigned int) ((arr_0 [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_3 + 1]))))))));
                arr_12 [i_3] [i_3] = ((/* implicit */_Bool) (~(3277927275U)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    var_16 = ((/* implicit */_Bool) min((((long long int) var_9)), (((/* implicit */long long int) ((short) (-(((/* implicit */int) (short)5))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99722
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
    var_20 &= ((/* implicit */int) ((signed char) var_18));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) var_6)), ((+(((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) var_12);
                                var_23 = ((/* implicit */unsigned short) var_0);
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) var_11))))) % (((((/* implicit */_Bool) 9975282687998314888ULL)) ? (((/* implicit */int) (signed char)127)) : (var_2))))))));
                    var_25 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-14486)) : (13430163))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26636)))))));
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((var_13), (((/* implicit */long long int) var_1))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (short)27143)) >> ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-108)) && (((/* implicit */_Bool) arr_1 [(unsigned char)10])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 4; i_6 < 11; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] [3U] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_5])) ^ (((((/* implicit */unsigned long long int) var_16)) % (var_3)))));
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (var_2) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (short)-26636)))))))) ? (18227490863715395582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26636))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4877395254184847221LL)) ? (-854637516) : (arr_29 [i_10] [i_10]))) & (((/* implicit */int) ((unsigned char) arr_29 [i_8] [i_9])))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_9]))))), (((max((var_3), (arr_27 [i_8]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) arr_24 [i_8])) : (var_12)))))))))));
                    var_30 = ((/* implicit */unsigned char) (~((~(arr_25 [i_10])))));
                }
            } 
        } 
    } 
}

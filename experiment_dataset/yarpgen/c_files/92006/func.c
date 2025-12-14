/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92006
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) var_12);
                        var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13260)) ? (((/* implicit */int) (short)-13261)) : (((/* implicit */int) (short)13260)))))))));
                        var_15 -= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) min((var_1), (var_7)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_10)))) : (var_9)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_0 - 4] = min((min((min((var_3), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1720082535) : (((/* implicit */int) (_Bool)0))))));
                            var_16 = min((((/* implicit */unsigned long long int) -1912800904)), (18446744073709551615ULL));
                            arr_20 [i_0] [i_4] [i_5] [i_4] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)-13261)), (-1912800904)));
                            arr_21 [i_0] [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) min(((~((-(var_5))))), (((/* implicit */long long int) var_4))));
                        }
                        var_17 = var_7;
                        arr_22 [i_0] [i_0] [i_0] [i_0] = var_7;
                        var_18 += max((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_7)))), (max((var_10), (var_2))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65535))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    arr_27 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_5), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((var_11), (var_6))))))) ? ((~((-(var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((4ULL), (((/* implicit */unsigned long long int) 0)))))))))));
                    var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (short)13260)))))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_0)) : (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
}

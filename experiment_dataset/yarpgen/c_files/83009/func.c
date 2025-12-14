/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83009
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_2 [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)(-32767 - 1))))) * (((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) (_Bool)0)))))))) ? ((+(2471106815U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58909)))));
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    arr_11 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (signed char)-5))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_12 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (_Bool)0);
                                arr_21 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (9174115570414520294ULL))), (((/* implicit */unsigned long long int) var_13))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) max((max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7403))) & (476941321U)))))), (((/* implicit */unsigned long long int) var_3))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (11U)))), (var_12)));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_3 [i_7]))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51463))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)-4581))))) : (max((((/* implicit */unsigned int) (short)-16540)), (4294967295U)))))));
                        arr_31 [i_8] = ((/* implicit */unsigned char) arr_28 [i_1] [i_7] [i_1] [i_0]);
                        arr_32 [i_7] [i_7] [i_1] [i_0] = arr_25 [(unsigned short)2] [i_1];
                    }
                    arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 3867856904U))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                }
                arr_34 [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_10)))))))) ? ((~(((/* implicit */int) min(((short)-9184), (var_9)))))) : (((((/* implicit */_Bool) (unsigned short)49772)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)0))))));
}

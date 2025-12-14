/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69501
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
    var_12 = ((/* implicit */int) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)1503))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (-((((!((_Bool)0))) ? (((/* implicit */int) ((signed char) 28ULL))) : (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (((~(0ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
    }
    var_14 = ((/* implicit */unsigned int) (~(0ULL)));
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_17 [i_4 + 1] [(_Bool)1] [i_3 - 1] [i_4 - 2] [i_3 - 1]) << (((((/* implicit */int) var_2)) - (41))))))));
                                arr_19 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_1);
                                arr_20 [i_1] [i_4 - 1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) min((min((((unsigned long long int) arr_5 [i_1])), (((/* implicit */unsigned long long int) var_10)))), (((((((/* implicit */_Bool) (short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1766826502U)))) + ((~(1ULL)))))));
                                arr_21 [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)18052), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9318)) % (((/* implicit */int) arr_4 [i_5] [i_4 - 1]))))) : (((var_1) << (((((/* implicit */int) arr_16 [i_4 - 2])) - (41847)))))))) ? (((/* implicit */int) ((short) (-(arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) << (((var_5) - (1458038437)))))))))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) var_4);
                                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1])) - (1ULL)))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1]))))) <= (((/* implicit */long long int) max(((+(var_1))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */_Bool) (short)-18052)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (signed char)59)))), ((-(((/* implicit */int) arr_24 [6] [i_7] [i_6 - 1] [i_3 - 1] [i_2] [i_1]))))))))));
                                arr_26 [i_1] [i_2] = ((((((/* implicit */_Bool) (~(var_11)))) ? ((~(var_5))) : (arr_5 [20LL]))) + (((((((((/* implicit */_Bool) var_8)) ? (arr_9 [i_7] [(unsigned short)12] [i_3]) : (((/* implicit */int) arr_16 [i_3])))) + (2147483647))) << (((max((((/* implicit */long long int) (unsigned short)19877)), (var_4))) - (19877LL))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((~(max((-432858640329521849LL), (((/* implicit */long long int) (short)0)))))))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5401945112303669198LL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3565086169U)))) ? (((((/* implicit */_Bool) -5401945112303669198LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))) ? (min((11990866546020401790ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))))));
}

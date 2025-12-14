/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82852
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) ((unsigned int) arr_5 [(_Bool)1] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((+(var_3))));
                                var_15 = ((/* implicit */unsigned int) min((((arr_11 [i_0] [i_0] [i_3] [i_4 + 1]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0])))), ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_4 - 2]))))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (+(((long long int) var_10))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (_Bool)1);
                                var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_7)), (var_3)))));
                                arr_23 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_6 + 3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [i_0] [i_0] [0U] [i_0]))))));
                                arr_24 [i_0] [i_1] [i_2] [i_1] [0LL] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_4)))) : (max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (signed char)-2)), (var_2)))))));
    }
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_14 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7])))))) : (min((((/* implicit */unsigned long long int) 5763183718024796580LL)), (0ULL)))));
        arr_29 [i_7] = ((/* implicit */unsigned char) min((((18446744073709551605ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) ((unsigned char) var_8)))));
        var_20 = ((/* implicit */unsigned int) max((min((var_5), (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (signed char)24)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) (unsigned char)153);
            var_22 = ((/* implicit */unsigned short) (unsigned char)196);
        }
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
        {
            arr_34 [i_7] = ((/* implicit */short) var_6);
            var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_32 [i_7]))));
            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-24007))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) -1045553459219395753LL))));
            var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) / (((/* implicit */int) arr_33 [i_10] [i_7]))))));
        }
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            arr_40 [i_7] [i_7] = ((/* implicit */short) var_7);
            var_27 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(((((/* implicit */_Bool) 4788097047467090182LL)) ? (var_13) : (((/* implicit */unsigned long long int) 4001111493U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86380
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) == (((/* implicit */int) arr_1 [i_1] [i_1 + 1])))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) 11521740393052910119ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (1539225829213323190LL))) : (arr_3 [i_1 + 1]))))));
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)46644))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_1 - 1])) : (((int) 927561645))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57127)))))));
            }
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((int) arr_6 [(signed char)10] [i_6] [i_5] [i_1]));
                            arr_19 [i_6] [i_7] [i_0] [i_6] [i_5] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [(unsigned char)7] [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [(unsigned short)10] [i_1 + 1]))));
                            arr_20 [i_6] [i_6] [i_6] [i_5] [i_1 + 1] [i_6] = (+((+(arr_8 [i_0] [i_0] [i_6]))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) ((_Bool) (unsigned short)10216))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_15))))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(-1))))));
            var_25 += ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)75))));
            arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1235024946)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51579))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_25 [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 12; i_10 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_9] [i_9] [i_10] [i_10 + 1] [i_10]);
                    var_27 = ((/* implicit */int) ((unsigned short) ((int) (signed char)70)));
                    var_28 = ((/* implicit */int) (!(((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) var_14);
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)17549)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (12781884748551385617ULL)));
}

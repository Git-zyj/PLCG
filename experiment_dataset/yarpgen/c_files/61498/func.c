/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61498
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((var_10), (((/* implicit */int) var_5)))) : (((((/* implicit */int) min(((short)-32765), ((short)-20613)))) | (min((var_10), (((/* implicit */int) var_4))))))));
    var_12 |= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-20616))) + (-3214940447623832546LL)))) ? (((/* implicit */int) min((arr_1 [9ULL]), (((/* implicit */unsigned char) arr_3 [i_0 - 3] [i_0 - 3]))))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((-3214940447623832545LL), (4809611467718981562LL))), (max((4404373235188109368LL), (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))), ((-(-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_15 = ((/* implicit */int) (unsigned char)247);
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_6 [i_0] [i_2] [i_2] = ((/* implicit */int) (short)20617);
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_5 + 2])) ? (((arr_7 [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                            var_17 = ((/* implicit */signed char) 4809611467718981562LL);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_6 = 4; i_6 < 20; i_6 += 3) 
        {
            arr_16 [0] [i_6] [13ULL] = (+((~(((/* implicit */int) arr_10 [(unsigned char)16] [18] [(short)6] [(unsigned char)16] [i_6 - 2])))));
            arr_17 [18] |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)20612)) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 - 3])))) <= (arr_12 [i_0] [i_6] [i_0] [i_6] [(_Bool)1] [i_6] [i_0])));
            arr_18 [i_0] [i_6] [(short)15] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_10 [i_6] [i_6 - 2] [i_6 - 4] [(short)12] [i_0]))))));
        }
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 20; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (arr_12 [i_0] [i_0] [i_0] [(signed char)15] [13LL] [13LL] [(_Bool)1]) : (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 2] [12] [(signed char)4] [i_7] [(signed char)4] [i_8 - 3])) : (arr_7 [i_7 - 3] [i_8])));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_2))));
                    }
                } 
            } 
            arr_26 [i_0 - 1] [i_7] = ((/* implicit */unsigned short) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) 2206609893U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_0] [20]))))) : (arr_7 [i_0] [i_0])))));
        arr_27 [(signed char)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0 - 3]))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77383
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
    var_13 = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63461)) ? (((/* implicit */int) (unsigned short)61131)) : (((/* implicit */int) (unsigned char)0))))), (5U))) == ((~(min((0U), (((/* implicit */unsigned int) (unsigned char)255))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61122))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))), (((unsigned short) arr_7 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_4 + 2]))))) - ((+(((((/* implicit */int) (unsigned short)61122)) << (((((/* implicit */int) arr_9 [i_0])) - (92)))))))));
                                var_16 = ((/* implicit */short) ((((_Bool) arr_5 [i_1])) ? ((-(arr_5 [i_1]))) : (max((arr_5 [i_1]), (((/* implicit */unsigned int) (unsigned char)100))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)4]))) : (2396849722U))))) ^ (((((/* implicit */_Bool) (unsigned short)63463)) ? (((/* implicit */int) (unsigned short)43322)) : (((/* implicit */int) (unsigned short)5)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_15 [i_0] [i_5] &= ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_2 - 1] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] = ((/* implicit */int) (unsigned char)1);
                            arr_19 [i_1] = ((((/* implicit */_Bool) arr_11 [i_1] [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]))) : (arr_0 [i_2 + 1]));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) 0))));
                            var_18 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) arr_16 [i_7] [i_1] [i_2 + 1] [i_5]))) ? (((long long int) arr_0 [i_2])) : (((/* implicit */long long int) (+(3650480877U)))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)61145))))));
                        }
                        arr_25 [i_1] = min((((/* implicit */long long int) (+((~(arr_14 [i_0] [i_1] [i_2] [i_2])))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)4404))) ? (((/* implicit */long long int) ((arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) 1898117599U)) ? (864691128455135232LL) : (((/* implicit */long long int) arr_4 [i_1] [i_5])))))));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) (+((~(1898117593U)))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned short) (~(arr_2 [i_2 - 2] [i_8])))))));
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_1] [i_2 - 2] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_5 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */long long int) arr_5 [i_1])) : (-1350061175592079629LL)))));
                        arr_33 [i_9] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) arr_5 [i_1]))) ? ((~(2396849725U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned int) ((signed char) (short)32767)))));
                    }
                }
            } 
        } 
    } 
}

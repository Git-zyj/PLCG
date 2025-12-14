/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72903
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_0)), (arr_1 [i_0 - 1]))), ((((_Bool)1) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 2]);
        var_17 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [16U] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_0 - 1])))) != ((-(3230285825227449691LL)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) (unsigned short)139)) : (var_6)))))));
                                arr_15 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))) ? ((~(1688741555U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2 + 3] [i_3] [i_2 + 3] [i_3] [19]))))) > (max((67553994410557440LL), (((/* implicit */long long int) (short)2359))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [2LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (short)-2360)))))))), (((((/* implicit */_Bool) var_12)) ? (arr_4 [4] [i_2 - 2]) : (arr_4 [i_2 - 1] [i_2 - 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_5]))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) 1359709740U);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5 + 2] [(unsigned short)21])) - (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_13)) & (((/* implicit */int) var_15))))));
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_5 + 1]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (max((((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_8 + 3])) != (((/* implicit */int) (unsigned short)138))))), (max((arr_20 [i_8 - 1]), (((/* implicit */unsigned short) (_Bool)1))))))));
        var_23 = ((/* implicit */unsigned int) (short)2359);
        arr_30 [i_8 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_8 - 1] [(_Bool)1] [i_8]))));
    }
}

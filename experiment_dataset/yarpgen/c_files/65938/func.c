/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65938
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 6; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((arr_10 [i_1] [i_1] [i_3 - 2] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(short)1] [i_3 - 2] [i_2])))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */short) var_5);
                            var_15 = ((/* implicit */unsigned long long int) (unsigned short)25588);
                            var_16 |= arr_6 [i_2 - 1];
                            var_17 = ((/* implicit */long long int) 5014346574126612729ULL);
                            var_18 = ((/* implicit */signed char) ((5014346574126612729ULL) <= (((/* implicit */unsigned long long int) 1966080))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_5 = 3; i_5 < 8; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5 - 1] [i_6] [i_5] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [4ULL] [i_6] [i_6 + 1] [i_5] [i_7 + 1])) || ((_Bool)0)));
                            var_19 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_20 += ((long long int) (unsigned short)1284);
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (var_7) : (((/* implicit */int) (unsigned short)65524))));
        }
        var_22 = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (70368744177663LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0]))))) : (arr_10 [i_0] [i_0] [4] [i_0])));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)));
    }
    for (int i_8 = 4; i_8 < 23; i_8 += 3) 
    {
        arr_26 [9U] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_23 [i_8 - 2])), (-11LL)));
        arr_27 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned long long int) 6834299919028609620LL)) : (9292599654126165929ULL)));
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_5))));
    var_25 = ((/* implicit */unsigned char) var_2);
    var_26 = (+(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_5) : (var_5))) > (var_5)))));
    var_27 &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (max(((unsigned short)48549), ((unsigned short)65520))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89903
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
    var_10 ^= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) (~(var_5)))) | (var_1)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = (~(((/* implicit */int) (unsigned char)7)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [2] [i_2] [i_2] [i_4] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((arr_0 [i_3]), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */int) arr_2 [i_3])) << (((var_3) - (1240138760))))) : ((~(var_7))))));
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((arr_13 [13] [6] [(unsigned char)12] [i_3] [i_3]) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : ((~(18ULL))))) != (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_11 [i_3] [i_1] [i_2] [i_3] [i_4])) ^ (var_7)))))))))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) << (((((-1530675459) + (1530675490))) - (1)))))));
                                arr_16 [4ULL] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)13])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        arr_25 [i_7] [i_5] [(_Bool)1] [i_7] [i_7] &= ((/* implicit */int) var_0);
                        arr_26 [i_5 - 3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5 - 3])) ? (arr_20 [i_7]) : (arr_20 [i_0])))) : (((((/* implicit */_Bool) 2140933301)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (0ULL)))));
                        var_13 = ((/* implicit */int) (!(((1440457669) != (((/* implicit */int) (unsigned char)254))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned long long int) ((int) 8257697911398925614ULL))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        arr_30 [15ULL] [i_8] = ((/* implicit */_Bool) ((int) var_7));
        /* LoopNest 3 */
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_6))));
                        arr_37 [(_Bool)1] [(_Bool)1] [5] [i_11] = ((/* implicit */int) ((unsigned char) arr_29 [i_8 - 1]));
                        arr_38 [i_8 - 1] [i_10] = ((unsigned long long int) var_0);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 4) 
    {
        arr_41 [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((var_7) ^ (((/* implicit */int) arr_39 [i_12])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_3)))))), (((var_0) & (var_1)))));
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_39 [i_12])), (var_5)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))) < (((/* implicit */int) ((((int) var_2)) == (((/* implicit */int) var_2)))))));
        arr_42 [i_12] = ((((/* implicit */int) arr_40 [i_12 + 1])) * (((/* implicit */int) arr_39 [i_12 + 2])));
        var_17 = ((int) var_7);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7746
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_7) > (var_2))))));
    var_14 = ((((/* implicit */_Bool) 9381859367452186829ULL)) ? (9064884706257364789ULL) : (6909758842754933719ULL));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 216172782113783808ULL)) ? (18446744073709551615ULL) : (0ULL)))) ? (((((/* implicit */_Bool) 9381859367452186829ULL)) ? (arr_1 [i_0 - 1] [i_0]) : (6909758842754933719ULL))) : (10166061801414547782ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_16 |= ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) >= (271444909869202198ULL)));
            var_17 *= ((unsigned long long int) (+(arr_1 [i_1] [i_0])));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_18 *= ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0 + 1])) ? ((~(var_5))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (9381859367452186841ULL) : (3233494837673854757ULL))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((~(525817203630188956ULL)))));
                            arr_12 [i_4] [18ULL] [i_2 - 1] &= 1853672419307368809ULL;
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_20 = 9064884706257364763ULL;
                            var_21 = ((((/* implicit */_Bool) 16593071654402182807ULL)) ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 + 1]));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_22 -= ((((/* implicit */_Bool) (-(arr_6 [i_6] [i_6] [i_6])))) ? (((var_6) * (5921449722839500675ULL))) : (arr_2 [i_0 - 2]));
                            var_23 = (+(10079024786139675393ULL));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 |= arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2];
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_2] [8ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_2 - 1] [i_3 - 1] [i_3] [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) var_10)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_25 = (+(arr_17 [i_8] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]));
                        var_26 = ((unsigned long long int) 3980559704284830833ULL);
                    }
                } 
            } 
        }
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (var_8)))))))) > ((+(18446744073709551615ULL)))));
}

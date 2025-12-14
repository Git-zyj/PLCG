/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72666
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = min(((_Bool)1), (((6710597861944122343LL) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (~(((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (var_11)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 3446891117295630356LL))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6545586182782284539ULL)) ? (1309008853021857118ULL) : ((((_Bool)1) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_0))))));
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((long long int) (~(arr_7 [i_1] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_3]);
            var_16 = ((/* implicit */long long int) (~(4231613315U)));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 1309008853021857110ULL))));
            var_18 = ((/* implicit */unsigned long long int) ((arr_6 [i_1]) / (var_4)));
            var_19 = ((/* implicit */int) arr_11 [0ULL] [i_3] [i_1]);
        }
        arr_15 [i_1] [i_1] = ((/* implicit */signed char) (((~(arr_11 [i_1] [i_1] [i_1]))) >= (((/* implicit */unsigned long long int) 0U))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_20 [i_5] = ((long long int) ((((/* implicit */unsigned long long int) var_9)) * (arr_13 [i_4] [i_5])));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_8 [0LL] [i_5] [i_4]))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_19 [(_Bool)1] [i_5]) : (((/* implicit */unsigned long long int) var_5)))))));
            arr_21 [i_5] = ((/* implicit */long long int) ((unsigned int) arr_12 [i_4] [i_4]));
        }
        arr_22 [i_4] = ((/* implicit */int) 4231613315U);
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_23 [i_6]) * (var_10)))))) ? (arr_6 [12LL]) : (((((/* implicit */_Bool) var_1)) ? ((+(var_4))) : (((((/* implicit */_Bool) arr_8 [4LL] [6LL] [4LL])) ? (((/* implicit */long long int) 63353985U)) : (-4645012075806922351LL)))))));
        arr_26 [i_6] = var_4;
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_13 [8ULL] [8ULL]), (arr_13 [i_6] [(_Bool)0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_13 [22ULL] [22ULL]) : (((/* implicit */unsigned long long int) var_15)))))));
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((_Bool)1) ? (-715795339246401813LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_31 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_8 [i_7] [i_7] [i_7]))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_8]))) : (arr_13 [i_8] [i_8])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_11]))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4299238379056692772LL)) ? (((/* implicit */long long int) 27U)) : (7894377357858416929LL)));
                        }
                    } 
                } 
            } 
            arr_44 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_8]))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        arr_49 [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_13])) ? (((/* implicit */long long int) var_10)) : (var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32764))) : (arr_24 [i_12]))))));
                        arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_13] [i_8] [i_6])) ? (arr_23 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
    }
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) + (((((/* implicit */_Bool) (-(38358681)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6))))))));
    var_28 = var_15;
}

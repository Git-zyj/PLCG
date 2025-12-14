/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59937
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (1008806316530991104LL)));
                        var_12 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 + 1])))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 854144147U)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_5])))) : (((arr_15 [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_17 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 554153860399104ULL)))) ? (((((/* implicit */int) arr_14 [i_5] [i_5])) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (unsigned short)36846)))));
            var_14 -= ((/* implicit */short) ((arr_15 [i_5]) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_13 [i_4]))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 3447236983U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((arr_15 [i_4]) ? (2989319038U) : (854144147U)))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_22 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5928)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_27 [i_9] [i_9] [i_9] [i_9] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_8] [i_6] [i_7] [i_9]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_24 [i_7])));
                            arr_28 [i_4] [i_9] [(_Bool)1] [i_8] [i_9] [i_4] [i_4] = (i_9 % 2 == zero) ? (((/* implicit */_Bool) ((((arr_21 [(_Bool)1] [4U] [i_6]) >> (((((/* implicit */int) arr_26 [i_4] [i_4] [3U] [i_8] [i_9])) - (36287))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))) : (((/* implicit */_Bool) ((((arr_21 [(_Bool)1] [4U] [i_6]) >> (((((((/* implicit */int) arr_26 [i_4] [i_4] [3U] [i_8] [i_9])) - (36287))) - (28887))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))));
                            var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4] [i_6] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [16LL] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))) : (arr_21 [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_6] [i_8]))) : (arr_18 [i_9]))));
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36846)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_6]))) : (arr_19 [i_4] [i_4]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            arr_34 [i_10] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_18 [i_4]))));
                        }
                    } 
                } 
                arr_35 [i_4] [i_4] [i_4] [i_7] = arr_32 [i_4] [i_4] [i_4] [i_6] [i_7] [i_6];
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_38 [i_12] [2ULL] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_29 [i_6] [6U] [i_6] [i_12])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))));
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36855)) ? (((/* implicit */long long int) ((/* implicit */int) (short)683))) : (7753006349580079918LL)));
                arr_39 [i_4] [i_6] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5934)) ? (arr_24 [i_4]) : (((/* implicit */long long int) 2860355650U)))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    {
                        arr_45 [i_4] = ((/* implicit */unsigned long long int) arr_30 [i_4] [i_6] [(_Bool)1] [i_14]);
                        var_20 = ((/* implicit */_Bool) (unsigned short)23);
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [i_4] [i_6] [i_4])) ? (1947333595U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))))));
        }
        arr_46 [i_4] |= ((/* implicit */long long int) (~((+(arr_25 [i_4] [i_4] [i_4] [i_4] [17LL])))));
        var_22 = 17529250251154142954ULL;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_13 [i_4]))));
            arr_51 [i_4] [(_Bool)1] [i_4] = ((/* implicit */short) ((((arr_15 [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) (short)7823))) : (arr_36 [i_15] [2ULL] [(_Bool)1] [i_15]))) % (((/* implicit */long long int) ((arr_30 [i_4] [(_Bool)1] [i_4] [i_15]) << (((arr_49 [i_4] [i_15]) - (18196716789393037606ULL))))))));
        }
    }
    var_24 = ((/* implicit */_Bool) 7716706680543858687ULL);
    var_25 = ((/* implicit */unsigned int) ((unsigned long long int) (~(4241212799397806272ULL))));
}

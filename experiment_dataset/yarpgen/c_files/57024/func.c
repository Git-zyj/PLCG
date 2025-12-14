/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57024
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
    var_11 = ((/* implicit */unsigned int) ((long long int) (short)15730));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) (signed char)-4));
            var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [i_0] |= var_5;
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max((((int) var_4)), ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)13))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) % (var_2))));
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_0] [i_2] [i_3]), ((short)-24840))))) : (arr_11 [(unsigned short)7] [i_1] [i_2] [i_2] [i_4 + 1])))));
                            arr_15 [i_2] [2U] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        }
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (short)28011)), (arr_1 [i_0]))) / (((/* implicit */int) var_4))));
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_16 += (unsigned short)11418;
            var_17 |= ((/* implicit */int) (-((-(-6296842878449793447LL)))));
        }
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            arr_20 [i_6] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            var_18 = ((/* implicit */long long int) ((unsigned short) ((long long int) (signed char)4)));
        }
        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((int) (_Bool)0)) != ((~(346099914)))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_7] [(short)14]))) + (((/* implicit */int) ((short) arr_19 [i_7])))));
        }
        for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
            {
                arr_29 [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / ((+(1728117054U)))));
                arr_30 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_8 - 1] [i_9] [i_8 + 2]))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_36 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (short)-15718)) : (((/* implicit */int) (_Bool)1))));
                            arr_37 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9] [i_8] [i_8 + 2])) ? (((/* implicit */int) var_5)) : (var_7)));
                            var_21 = ((/* implicit */_Bool) ((signed char) arr_34 [i_0] [(unsigned short)12] [(unsigned short)6] [i_0] [i_9] [(unsigned short)6]));
                            var_22 = ((/* implicit */unsigned short) arr_22 [i_0] [11ULL] [i_0]);
                            var_23 = ((/* implicit */int) arr_14 [i_8 + 2] [i_8 - 1] [i_9] [i_8] [14]);
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
            {
                arr_41 [i_0] [i_8] [i_12] [i_12] = ((((/* implicit */_Bool) 3739930230U)) ? (arr_24 [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (short i_14 = 3; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) var_0);
                            arr_47 [i_13] [i_13] [i_14] = ((/* implicit */_Bool) 14402776226634201092ULL);
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) (~(arr_24 [i_0])));
                arr_50 [10ULL] [i_15] [i_15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_15] [(_Bool)1] [(_Bool)1])) - (((int) arr_40 [i_0] [i_8 - 2] [i_15] [i_15]))));
            }
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_8 - 1])) ? (arr_42 [7] [i_8] [i_8] [i_8 - 1]) : (arr_42 [i_0] [i_8] [i_0] [i_8 - 1])))) ? (1) : ((~(((/* implicit */int) (short)-29538)))))))));
        }
        arr_51 [i_0] [(unsigned short)12] = ((/* implicit */int) 555037044U);
        /* LoopSeq 1 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            arr_54 [i_16] = ((/* implicit */int) ((765765476164619315LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-15731)))));
            arr_55 [10U] |= ((/* implicit */short) min((min((-6296842878449793447LL), (-6296842878449793438LL))), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (unsigned long long int i_17 = 3; i_17 < 7; i_17 += 3) 
    {
        var_27 = ((/* implicit */int) var_5);
        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) (short)15743));
        var_29 = ((/* implicit */unsigned short) min(((short)-29538), (var_10)));
    }
    var_30 = ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (((unsigned short) var_1))));
}

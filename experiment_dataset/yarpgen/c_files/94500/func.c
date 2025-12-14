/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94500
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)94))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned long long int) (((!(arr_9 [i_3] [i_3] [(unsigned short)21] [18ULL] [i_1] [i_0]))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))));
                        arr_12 [(unsigned char)18] [(unsigned char)18] [19LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) && (arr_1 [i_0] [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((arr_5 [i_0] [i_1]) - (12064087282088936016ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((arr_5 [i_0] [i_1]) - (12064087282088936016ULL))) - (14126758075416705864ULL))))));
                        arr_17 [i_0] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)0))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        arr_27 [i_0] [12LL] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_0] [i_6] [i_8])));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5063771341280930899ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-3697695941157153165LL)))) ? (arr_26 [20LL] [i_6] [i_7] [i_8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0)))))))));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? ((~(((/* implicit */int) (unsigned char)0)))) : (2147483647)));
                    }
                } 
            } 
            var_24 = ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_25 [i_6])));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((2147483647) >= (((/* implicit */int) (_Bool)0))));
                        var_25 ^= ((/* implicit */short) ((long long int) arr_1 [i_0] [(short)20]));
                        var_26 |= ((/* implicit */_Bool) (-(865283222U)));
                        arr_35 [i_9] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                        var_27 = ((/* implicit */long long int) (short)19689);
                    }
                } 
            } 
            var_28 = ((/* implicit */short) arr_6 [i_6] [i_6] [i_6] [i_0]);
        }
        var_29 ^= ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_18))))));
                    var_31 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_11] [(_Bool)1]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            {
                arr_54 [i_14] [i_14] [i_15] = ((/* implicit */int) ((min((max((13ULL), (((/* implicit */unsigned long long int) (unsigned char)19)))), (((/* implicit */unsigned long long int) -3697695941157153165LL)))) * (((/* implicit */unsigned long long int) 3697695941157153189LL))));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min((max((((/* implicit */unsigned int) (unsigned short)4773)), (((((/* implicit */_Bool) (short)9750)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (865283220U))))), (((/* implicit */unsigned int) (_Bool)1)))))));
                arr_55 [(short)1] [i_14] [i_15] = ((/* implicit */long long int) ((short) (_Bool)1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
    {
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            arr_65 [i_17] [i_17] [i_18] [(unsigned char)5] [i_19] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -8255627433900260424LL)) ? (arr_56 [i_16] [i_17]) : (arr_56 [i_16] [i_19]))) | (min((((/* implicit */int) (_Bool)0)), (arr_56 [i_19] [i_18])))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))), (arr_51 [i_18] [8U])))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : (min((arr_6 [(short)5] [i_17] [i_18] [i_19]), (((/* implicit */unsigned long long int) ((int) var_18)))))));
                            var_34 &= ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_17] [i_16]))));
                            arr_66 [i_16] [i_17] [i_17] [i_16] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_16 [i_17] [i_17] [i_17])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) arr_41 [17ULL] [i_17]);
                            var_36 = ((/* implicit */_Bool) min((var_36), (min(((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)71)), (13382972732428620717ULL)))))), ((_Bool)1)))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned long long int) arr_64 [(_Bool)1] [i_17] [i_17] [i_17] [i_17] [(short)7]);
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) max(((short)19689), (((/* implicit */short) (_Bool)1))));
}

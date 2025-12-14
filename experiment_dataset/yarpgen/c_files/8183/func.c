/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8183
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
    var_17 = ((/* implicit */signed char) ((unsigned long long int) var_3));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (arr_0 [i_0 + 1] [(unsigned short)8]))), (((/* implicit */unsigned long long int) arr_1 [12LL])))))));
        var_19 ^= ((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) 183367858))))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)244)))) / (((int) arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) 4294963194U);
                        arr_13 [i_3] = ((/* implicit */short) ((signed char) (unsigned char)243));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) (unsigned short)28);
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            var_22 = ((/* implicit */_Bool) arr_12 [i_6 - 1]);
            arr_18 [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)8)) ? (var_10) : (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) 1346785030U))))) ? (min((((/* implicit */long long int) ((int) 4294963195U))), ((+(13LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_7);
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((long long int) arr_22 [i_5] [i_6] [i_6] [i_7]))) - ((-(arr_22 [i_5] [i_6] [(unsigned char)1] [i_7]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_26 [i_5] [i_5] [(_Bool)1] [i_5])))) == ((+(((/* implicit */int) arr_4 [i_6 + 2] [i_7 - 1]))))))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) var_14);
                            var_27 = ((/* implicit */unsigned short) (((~(arr_24 [(unsigned char)12] [i_10 + 2] [i_10] [(unsigned char)7] [i_6 + 1] [i_6 - 1]))) | (((/* implicit */unsigned long long int) var_10))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_7] [i_6])))))))) == (-7364330936734738202LL))))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_29 -= ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)96)), ((+(((/* implicit */int) var_8))))));
                            arr_42 [i_5] [i_6] [i_12] [i_13 + 1] [i_14] [i_13 + 1] = (signed char)-55;
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_5] [i_6 + 1] [i_12])) ? ((~(1499833844418243126LL))) : (((/* implicit */long long int) -825319341)))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (min((var_12), (((/* implicit */int) arr_26 [i_5] [i_6] [(signed char)8] [i_12]))))))))))));
                arr_43 [i_5] [i_6] [(unsigned short)1] = ((/* implicit */unsigned short) arr_41 [i_5] [i_5] [i_6] [i_6] [i_5]);
            }
        }
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 19; i_15 += 1) /* same iter space */
        {
            arr_46 [i_15] = ((/* implicit */short) (((-(4294963198U))) + (4294963168U)));
            var_31 += ((/* implicit */unsigned short) ((arr_8 [i_15 - 1]) >= (((/* implicit */long long int) arr_39 [i_15 + 3]))));
            arr_47 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
        }
        for (unsigned char i_16 = 1; i_16 < 19; i_16 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) var_14);
            /* LoopNest 3 */
            for (long long int i_17 = 1; i_17 < 21; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) (~((((-(((/* implicit */int) arr_16 [i_16] [i_16 + 3])))) | (((/* implicit */int) max(((unsigned char)143), ((unsigned char)247))))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) max((arr_35 [i_5] [i_5] [i_5]), (arr_25 [i_5] [i_5] [i_17 - 1] [i_5] [i_18] [i_19]))))) ? (((((/* implicit */_Bool) (~(1499833844418243114LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_5]))))) : (min((var_15), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            var_35 = ((/* implicit */_Bool) (~(((long long int) (signed char)-101))));
                            arr_57 [i_5] [20] [i_16] [i_17] [i_5] [i_19] = ((/* implicit */_Bool) (-((+(arr_48 [i_17 - 1] [i_16 - 1])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_20 = 1; i_20 < 19; i_20 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_45 [i_20 - 1] [i_20] [i_20]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19353)) << (((((var_3) + (2153754836084903143LL))) - (10LL)))))) : ((+(4119U)))));
            var_37 = arr_37 [i_20] [8] [i_20] [i_5] [i_5] [i_5];
        }
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
        {
            for (unsigned char i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                {
                    var_38 ^= ((/* implicit */long long int) (~((-(((/* implicit */int) arr_64 [i_22 + 2]))))));
                    var_39 = ((((long long int) arr_24 [i_5] [i_21] [i_21] [i_21] [i_21] [i_22 + 1])) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8907))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_13)))));
}

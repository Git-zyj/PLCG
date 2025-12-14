/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90827
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
    var_13 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_3 [i_0] [i_0 + 2]))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min(((-(min((((/* implicit */long long int) (short)7581)), (arr_0 [i_0]))))), (((/* implicit */long long int) (~(2056330877U)))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 ^= var_7;
        arr_7 [i_1] [i_1] = max((((-5173339256087360821LL) + (((/* implicit */long long int) ((/* implicit */int) (short)7567))))), (((/* implicit */long long int) arr_6 [i_1] [i_1])));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) max((var_17), ((short)-7583)));
                        var_18 = arr_8 [i_2] [i_3] [i_2];
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((signed char) (short)-7596))) + (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_3)))))))));
                        arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7588))) - (1515661830178036177ULL)));
                        arr_17 [i_4] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) << (((((/* implicit */int) (unsigned char)255)) - (244)))))) ? (((/* implicit */unsigned long long int) max((2320955682517498719LL), (((/* implicit */long long int) 1111839610))))) : ((~(7772520333365586488ULL)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1] [i_1])))) && ((!(((/* implicit */_Bool) var_8))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_7)), (var_12)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((long long int) (~(3895337878566348611LL))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_3 [i_5] [i_5]))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) 28U)) / (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_1 [i_9])))));
                            var_23 &= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)178)) + (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_4)));
                            var_24 |= ((/* implicit */unsigned long long int) ((_Bool) arr_26 [i_6 - 1] [i_6] [i_6 - 1] [i_8] [i_7] [i_8]));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_20 [i_8] [i_9]))));
                        }
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 3) 
                        {
                            var_26 &= ((/* implicit */long long int) var_12);
                            arr_32 [i_5] [i_8] [i_5] [i_5] &= ((/* implicit */signed char) ((arr_0 [i_6 - 2]) ^ (arr_0 [i_6 - 3])));
                            var_27 ^= ((/* implicit */unsigned int) 2658098638152801223ULL);
                            var_28 -= ((/* implicit */unsigned char) var_7);
                        }
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((int) (unsigned char)255)))));
                        var_30 |= ((/* implicit */long long int) ((signed char) (~(6045291616584279575LL))));
                        var_31 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                {
                    arr_38 [i_5] [i_5] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) var_0))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_12] [i_12] [i_11 - 2] [i_12] [i_11 - 2] [i_12])))))));
                    var_33 += ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (_Bool)1))));
                                arr_43 [i_5] [i_11] [(unsigned short)10] [i_14] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) (short)-7552);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        arr_46 [i_15] [i_12] [i_11 + 1] [i_5] [i_5] [i_5] &= ((signed char) ((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */long long int) var_5);
                            var_36 ^= ((/* implicit */int) (~(arr_1 [i_11 + 2])));
                        }
                        for (long long int i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            var_37 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            arr_52 [(unsigned short)1] [(unsigned short)1] [i_5] = ((/* implicit */long long int) var_12);
                            arr_53 [i_5] [i_17] [i_12] [(short)0] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_5 [i_5]))));
                        }
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_18] [i_18] [0ULL] [i_12] [i_18])) || (((/* implicit */_Bool) arr_41 [i_18] [i_11 - 3] [i_5] [i_18] [i_11 + 2] [i_12]))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_12] [i_12] [i_12] [i_11] [i_5])))))));
                    }
                    for (long long int i_19 = 2; i_19 < 11; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */long long int) arr_25 [i_5] [i_5] [i_11] [i_11] [i_12] [i_19]);
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (unsigned char)255))));
                    }
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        var_42 &= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 2147483647)) ? (arr_9 [i_5] [i_11]) : (-8671196898511442550LL))));
                        var_43 ^= ((/* implicit */short) ((((arr_0 [i_12]) | (4260661264207276099LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))));
                    }
                }
            } 
        } 
    }
}

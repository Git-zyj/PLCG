/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83372
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) arr_4 [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (signed char)-94)) ? (var_10) : (var_9))))), (((/* implicit */int) var_0))));
                            var_16 = ((/* implicit */unsigned int) (signed char)-94);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)94)) ? ((~(((/* implicit */int) (signed char)-91)))) : (((/* implicit */int) arr_4 [i_1])))) >= ((+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)87)), (arr_5 [i_0] [(signed char)8]))))))));
        }
        var_18 -= ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(short)0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)94))))) ? (((/* implicit */unsigned long long int) (+(arr_18 [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) 1388575916U)) ? (arr_9 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                            var_20 -= ((/* implicit */int) ((long long int) (unsigned short)65535));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_5]));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) arr_9 [i_12] [i_12] [i_0] [i_0] [i_9] [i_0]);
                            var_23 -= ((/* implicit */unsigned int) arr_32 [i_0]);
                            var_24 = ((/* implicit */int) ((short) (signed char)-121));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) arr_26 [i_0 + 3] [i_0 + 4]);
            }
            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) arr_17 [i_9] [i_0] [i_0] [i_0]))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_4 [i_0]))));
        }
        /* LoopNest 3 */
        for (signed char i_13 = 3; i_13 < 13; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((2906391379U), (((/* implicit */unsigned int) (signed char)-94)))))))));
                        var_29 = ((/* implicit */short) (+(max((((/* implicit */int) arr_2 [i_0 + 2])), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (_Bool)0))))))));
                        var_30 = ((/* implicit */unsigned long long int) (-(max(((-(((/* implicit */int) arr_6 [i_0] [i_14] [i_14])))), (((((/* implicit */_Bool) arr_13 [i_0] [i_13 - 2] [i_13 - 1] [i_15] [i_0 + 1] [i_15])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) arr_34 [i_0] [4] [i_14] [i_15]))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_3)))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(((/* implicit */int) arr_43 [i_16])))))));
        var_33 = (!(((/* implicit */_Bool) (unsigned short)13135)));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((unsigned long long int) 2147483631)))));
    }
    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
    {
        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_44 [i_17] [i_17]), ((signed char)-121)))) ? ((+((+(((/* implicit */int) arr_44 [i_17] [i_17])))))) : (((/* implicit */int) (unsigned short)9595))));
        var_36 = min(((-(((/* implicit */int) (signed char)-120)))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_44 [i_17] [i_17]))))))));
        var_37 = ((/* implicit */unsigned short) arr_45 [i_17]);
    }
    var_38 = ((/* implicit */unsigned short) var_10);
}

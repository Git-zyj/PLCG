/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58323
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
    var_12 -= ((/* implicit */unsigned short) var_1);
    var_13 = var_0;
    var_14 = ((/* implicit */_Bool) ((unsigned int) var_9));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (signed char)-36))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */long long int) -1776267185)), (min((max((((/* implicit */long long int) (signed char)-44)), (-7128746453233244261LL))), (((/* implicit */long long int) arr_4 [i_1 + 2] [i_1] [i_1 + 3])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_4))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [i_1 - 1] [i_4])) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) arr_1 [i_4]))))))))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [(unsigned char)7] [i_4] [i_4]);
                                var_19 = ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_3] [i_1 - 1] [(signed char)21] [i_3]));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (((unsigned int) var_3))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_8 [i_1 + 3] [i_1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_5 [i_5] [i_5] [i_5]))));
                        arr_24 [i_0] [i_5] [i_6] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) > (-7128746453233244254LL)))))), (arr_22 [i_0] [i_0])));
                        var_23 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (short)21790)) : (((/* implicit */int) (signed char)-14)))) & (((/* implicit */int) arr_1 [i_5])))) % (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5]))));
                        var_24 = ((/* implicit */short) ((signed char) min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_22 [i_0] [9])))));
                    }
                } 
            } 
        } 
        var_25 += ((/* implicit */unsigned short) max(((+(max((((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)10])), (var_0))))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_8 [i_0] [1ULL])))) + (2147483647))) >> (((max((((/* implicit */unsigned int) arr_19 [i_0] [i_0])), (arr_15 [i_0] [i_0] [i_0]))) - (411605322U))))))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+((~(var_0))))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */int) var_4);
        var_27 = ((/* implicit */unsigned char) ((7128746453233244253LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (unsigned char i_10 = 3; i_10 < 14; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 4; i_11 < 15; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) ((short) (+(((/* implicit */int) var_5)))));
                        var_29 = ((/* implicit */unsigned char) ((arr_0 [i_9]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8 + 1] [i_11 - 4])))));
                        var_30 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                        var_31 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_4 [i_9] [i_10 + 2] [i_11 - 3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [(signed char)6] [i_8]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_32 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (((((/* implicit */_Bool) var_8)) ? (arr_9 [10LL] [i_12]) : (((/* implicit */unsigned long long int) -7128746453233244261LL)))))), (((/* implicit */unsigned long long int) min((arr_35 [i_12] [i_12]), (((/* implicit */unsigned char) arr_36 [(unsigned char)4])))))));
        var_33 = ((/* implicit */unsigned char) (~(-7128746453233244257LL)));
    }
    var_34 = ((/* implicit */unsigned short) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58752
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_17 |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52287))) : (4458527299746650231ULL))) << (((/* implicit */int) var_15)))) ^ (8801699007254821538ULL)));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) arr_2 [9U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) 1746984131U)) <= (arr_2 [i_0]))))))) : (max((((/* implicit */unsigned long long int) 1746984122U)), (13988216773962901384ULL)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_19 |= ((/* implicit */short) (-(((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) ((arr_2 [i_2]) > (arr_5 [i_0]))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            var_20 += ((/* implicit */signed char) (+(((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_3]))))));
                            var_21 -= ((/* implicit */signed char) arr_3 [i_3]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1])))) ? ((-(4189037028216085894ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_0 - 1] [i_0 - 1]))))))))))));
                            var_23 ^= ((/* implicit */unsigned long long int) (short)15180);
                        }
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            arr_14 [i_0] [3U] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) arr_1 [i_0]);
                            var_24 *= ((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)12601))))) < (((/* implicit */long long int) ((unsigned int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                            var_25 = ((/* implicit */long long int) var_12);
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        arr_18 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        arr_27 [i_6] [i_7] [i_7] [(signed char)10] [i_7] = ((/* implicit */unsigned short) (-(((arr_25 [13U] [i_7] [i_7] [i_7]) - (((/* implicit */unsigned long long int) var_12))))));
                        var_26 = ((/* implicit */unsigned long long int) (~(4294967295U)));
                        var_27 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-23719)))), (((((/* implicit */_Bool) 6327056763057344804ULL)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (short)5700))))))), (var_14)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (var_7)))))));
        var_29 = ((/* implicit */signed char) ((short) ((((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10]))))) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0))))));
    }
}

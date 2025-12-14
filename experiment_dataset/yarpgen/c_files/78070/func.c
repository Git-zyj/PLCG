/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78070
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_10))) ? (((int) (unsigned short)16401)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((3740688512585848447LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))))));
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (max((17697421517924129789ULL), (17697421517924129774ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (5692832737381511467ULL))) : (((/* implicit */unsigned long long int) (~(var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))))))));
    }
    for (int i_4 = 4; i_4 < 18; i_4 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_9 [i_4 - 4]))) | (min((((7302634868020076745ULL) << (((5692832737381511443ULL) - (5692832737381511414ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_4)))))) : (min(((~(-1LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_13 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)40614)) ? (-5179374492780156086LL) : (((/* implicit */long long int) -1698741267))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) arr_10 [i_5] [i_5])), (var_6)));
        /* LoopNest 2 */
        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) (unsigned char)255);
                    var_24 = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_25 = var_6;
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_5]))))) : (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_27 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)82))))))))));
                    var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_11 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_16 [i_5] [i_5] [i_9])));
                }
            } 
        } 
    }
}

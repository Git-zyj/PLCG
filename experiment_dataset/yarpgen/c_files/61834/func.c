/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61834
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
    var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))))) ^ (((int) max((((/* implicit */unsigned long long int) var_12)), (5381169681376367063ULL))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 += ((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) <= (((/* implicit */int) ((var_12) && (arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        var_20 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_6)), ((-(((unsigned int) (short)1081))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [8])) || (((/* implicit */_Bool) max((-1125524473), (-2135203146)))))));
                        arr_15 [i_4 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) >> (((max((((/* implicit */unsigned long long int) arr_5 [i_4 - 2])), (max((((/* implicit */unsigned long long int) -8512111664093111364LL)), (arr_13 [i_1] [i_1]))))) - (12681913493319924059ULL)))));
                        var_21 = ((/* implicit */unsigned short) ((((long long int) -1916864563)) * (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_4 - 2] [i_4] [i_4 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7336)))))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1] [i_1] [i_1]) < (((/* implicit */long long int) arr_6 [i_1])))))) != (min((((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_1] [i_1] [i_1]))), (min((((/* implicit */unsigned long long int) 2147483647)), (3477001452149919968ULL)))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned long long int) arr_25 [15U]);
                        arr_26 [i_1] [i_1] [i_6] [i_1] [(unsigned short)12] &= ((/* implicit */unsigned char) max(((+(min((arr_13 [i_5] [i_6]), (((/* implicit */unsigned long long int) 8657508755777615498LL)))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_7 [i_1] [i_5 - 1] [i_6])))) ^ (((/* implicit */int) ((-15) > (((/* implicit */int) arr_22 [i_1] [i_6] [(unsigned short)12] [i_1]))))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) max(((((((-(1671150953))) + (2147483647))) << (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_8))))))), (var_4)));
    var_24 = ((/* implicit */_Bool) -758991738);
    var_25 = ((/* implicit */unsigned int) var_4);
}

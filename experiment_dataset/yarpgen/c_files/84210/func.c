/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84210
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_11 = max((arr_0 [i_0]), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) / (((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_4 [7] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)35305)) : (((/* implicit */int) (unsigned short)30236)))));
        var_12 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((arr_6 [i_1] [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) (unsigned short)30245))))) : ((~(-262670116385027315LL))))), (((/* implicit */long long int) (+(arr_6 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35294))) - (-2118767607128440055LL)))));
                        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)235)) ? (min((((/* implicit */long long int) (-(385435437)))), (arr_8 [i_2] [8] [i_3]))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 10094905514689805209ULL))))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_11 [i_1] [4LL] [i_1])))) ? (((min((385435417), (arr_11 [i_1] [i_1] [i_1]))) + (arr_9 [(_Bool)1]))) : (arr_2 [i_1] [i_1])));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 385435411))));
                        arr_28 [i_1] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) -3678386023259318133LL);
                        arr_29 [i_5] [i_7] = ((/* implicit */int) max(((unsigned short)30228), ((unsigned short)34642)));
                        var_18 = (unsigned char)190;
                        var_19 = ((/* implicit */_Bool) max(((unsigned short)35305), ((unsigned short)30199)));
                    }
                } 
            } 
        } 
        arr_30 [i_1] [i_1] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_13 [i_1])))), (((/* implicit */int) min((arr_13 [i_1]), (((/* implicit */unsigned short) arr_10 [i_1])))))));
    }
    for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                for (unsigned short i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) (unsigned short)30228);
                        var_21 = ((/* implicit */unsigned long long int) var_8);
                        var_22 = ((/* implicit */short) arr_33 [i_8 + 2]);
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)30242))));
                        arr_44 [i_8 + 2] = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) arr_39 [i_8] [i_8 - 2] [i_8]);
        arr_45 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)63299), (((/* implicit */unsigned short) (unsigned char)241)))))) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) max((max(((unsigned short)35315), (((/* implicit */unsigned short) (unsigned char)149)))), (((/* implicit */unsigned short) (unsigned char)220)))))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8 + 1] [i_8]))) - (var_6))))))));
    }
}

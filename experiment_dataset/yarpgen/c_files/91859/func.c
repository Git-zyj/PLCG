/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91859
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24181)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (max((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_3 [i_0] [i_0]))))))) : (arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (var_0)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) arr_2 [i_0])))))) <= (((((/* implicit */_Bool) 3093122131U)) ? (1201845153U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))))))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), ((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((4002553065U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515)))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_7 [(short)16]))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) 17173303992935523618ULL);
        var_18 += ((/* implicit */signed char) max((((unsigned short) min((var_7), (((/* implicit */unsigned short) arr_0 [i_2] [i_2]))))), (((/* implicit */unsigned short) arr_3 [i_2] [i_2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24167))))) + (min((292414249U), (((/* implicit */unsigned int) (unsigned short)41355))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (min((11ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) arr_13 [i_4])) : (max((((/* implicit */unsigned long long int) min((arr_6 [i_4]), (((/* implicit */short) var_10))))), (min((arr_10 [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2])))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)24166)) ? (((/* implicit */unsigned long long int) 292414255U)) : ((((_Bool)1) ? (4430497542920964218ULL) : (14016246530788587398ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_2])), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned short)14] [i_2] [i_2] [i_2] [i_2]))) : (arr_13 [i_2]))))))));
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned short)41355), (((/* implicit */unsigned short) arr_14 [i_2] [i_2]))))), (arr_17 [(short)0] [i_2] [i_2] [i_2] [(unsigned short)16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_2])))) : (var_5)));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (min((((1273440080774027998ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))))), (((/* implicit */unsigned long long int) (unsigned short)3584)))) : (0ULL)));
    var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 292414249U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10071918284440190305ULL)))));
    var_23 = ((/* implicit */long long int) (+((-((-(((/* implicit */int) var_1))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87949
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))) / (min((((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (2993154382320618795ULL) : (var_7)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)0)))))) - (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)33)))))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (15453589691388932821ULL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2993154382320618789ULL)) ? (((/* implicit */unsigned long long int) -1933318795)) : (15453589691388932820ULL)))) ? (var_6) : ((-(var_8)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((-(2993154382320618779ULL))) > (((/* implicit */unsigned long long int) var_10))))), (((unsigned int) var_6))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1]))));
                                arr_14 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (2993154382320618779ULL)))) ? (min((arr_7 [i_1]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (7143460397986281801ULL))))))) - (arr_5 [i_0] [i_1] [i_3])));
                                arr_15 [i_2] [i_1] [i_0] [i_4] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_4] [i_3] [i_0 - 1]), (arr_4 [i_1] [i_1] [i_1])))) ? (((((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_1])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */long long int) arr_1 [i_4] [i_4])) : (arr_0 [i_1] [i_3]))) << ((((+(arr_5 [i_0] [i_2] [i_0]))) - (6462016739208577285ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) max((((int) 1642592577U)), (-1933318795)));
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */short) (~(arr_1 [i_5 + 1] [i_5 + 1])));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_0 [(unsigned char)9] [i_5])) < (((arr_6 [i_5] [i_5] [i_5 + 1] [(unsigned short)10]) << (((15453589691388932820ULL) - (15453589691388932770ULL))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (arr_9 [i_5] [i_8] [i_7 - 4] [i_8] [4ULL]))))));
                        arr_27 [i_8] [i_5] [i_7] [i_5] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-5671278579371028190LL));
                    }
                } 
            } 
        } 
    }
    var_19 += var_3;
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((max((((/* implicit */unsigned long long int) 1078624590344096342LL)), (var_7))) >> (((((/* implicit */int) ((unsigned char) var_4))) - (204))))) - (7710ULL)))));
}

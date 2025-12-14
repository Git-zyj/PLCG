/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97907
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
    var_14 = ((/* implicit */unsigned short) 0U);
    var_15 ^= ((/* implicit */signed char) var_12);
    var_16 -= var_2;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_6), (arr_1 [i_0])));
        var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (-4264211793774064382LL) : (-4264211793774064382LL)))))))) >= ((-((+(arr_2 [i_0])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))) < (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3])) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_6)))) == (17448591894914991329ULL)))) : ((~(((/* implicit */int) arr_11 [i_0] [i_0] [4U] [i_3] [i_3] [i_3]))))));
                        arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(short)3] [i_1] [i_3]))))), (arr_1 [i_2 - 2])))) ? (((int) max((-4264211793774064382LL), (((/* implicit */long long int) (short)21994))))) : (((/* implicit */int) min((var_7), ((!(((/* implicit */_Bool) arr_4 [i_3] [5U])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((-407992382) / (((/* implicit */int) arr_11 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [i_4]))))) == (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4 - 3] [i_4] [i_4] [i_4] [i_4]))) : (0ULL)))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_20 ^= ((/* implicit */short) var_12);
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_4 + 1]) | (((/* implicit */unsigned long long int) max((arr_5 [i_4] [i_7] [2]), (((/* implicit */int) (unsigned short)30089)))))))) ? (((((((/* implicit */_Bool) var_6)) ? (arr_6 [i_8] [i_8] [(short)13] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)98)), (2703717859U)))))) : (((/* implicit */long long int) ((unsigned int) ((unsigned short) 2703717859U)))))))));
                            var_22 += ((/* implicit */unsigned short) (unsigned char)229);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned short) (-((-(-6661267535369379440LL)))))))));
            var_24 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)27))));
        }
    }
    for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        var_25 *= ((/* implicit */unsigned char) max(((-((+(((/* implicit */int) arr_28 [i_10])))))), (((/* implicit */int) ((signed char) (signed char)-1)))));
        arr_31 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)26337))))))) : (((((unsigned long long int) (_Bool)1)) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10]))) : (0U))))))));
    }
    var_26 = ((/* implicit */long long int) ((unsigned char) 2703717859U));
}

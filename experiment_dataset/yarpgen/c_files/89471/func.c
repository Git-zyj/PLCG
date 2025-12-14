/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89471
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((var_4), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned int) arr_0 [(_Bool)1])))));
        var_12 *= ((/* implicit */signed char) arr_0 [8U]);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */int) -7181051517424870813LL);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
            arr_14 [i_1] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (short)12201))))));
            var_14 ^= ((/* implicit */int) min((arr_8 [(signed char)1] [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (7181051517424870813LL) : (8191257765666679497LL)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_15 = ((/* implicit */long long int) 239117252);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_3])))))) <= (((/* implicit */int) ((_Bool) (!(arr_17 [i_1 - 1] [i_1 - 1] [i_3]))))))))));
                var_17 = ((/* implicit */long long int) var_9);
            }
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_4] [i_4])) ? (-506523932) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_12 [i_1] [i_4] [i_1]))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_18 [i_1])))))) | ((-(((int) arr_15 [i_1] [i_1] [i_1]))))));
            arr_20 [i_1] [i_1] = ((/* implicit */int) arr_6 [i_1]);
        }
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_1 - 2]), (arr_10 [i_1 - 3])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_1 - 3])) : (((/* implicit */int) arr_10 [i_1 + 1])))) : (((((/* implicit */int) arr_10 [i_1 + 1])) + (((/* implicit */int) arr_10 [i_1 - 1]))))));
        arr_22 [i_1] [i_1] = ((/* implicit */short) min(((_Bool)1), (arr_19 [i_1])));
    }
    for (short i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_26 [(_Bool)1] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) -7181051517424870826LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [(unsigned short)0]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(signed char)5])))))) : (((((/* implicit */_Bool) -7181051517424870810LL)) ? (2934751010877678951LL) : (7181051517424870819LL)))))) : (max((min((9052932271407428733ULL), (((/* implicit */unsigned long long int) arr_11 [(signed char)2] [(signed char)2] [i_5 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)8731)))))))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (max((min((((/* implicit */unsigned int) var_8)), (arr_6 [12U]))), (((/* implicit */unsigned int) ((short) arr_19 [i_5 - 3])))))));
        var_20 = ((/* implicit */unsigned int) var_3);
        arr_27 [i_5 - 3] = -5804224165899707883LL;
    }
    for (short i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_16 [16] [(_Bool)1] [i_6 - 3] [i_6 - 3]))));
        arr_30 [i_6] = ((/* implicit */unsigned int) var_2);
        var_23 = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_7 [(_Bool)1])), (268435456)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_33 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [i_7] [i_7]) / (467327417)))) ? (((((/* implicit */_Bool) arr_32 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9052932271407428735ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (((/* implicit */int) (signed char)127)) : (arr_32 [i_7] [i_7])))));
        var_24 = ((/* implicit */short) var_2);
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7]))) - (var_2))))))));
        arr_34 [i_7] = ((/* implicit */unsigned int) max((var_7), (((/* implicit */short) max((arr_31 [i_7]), (arr_31 [i_7]))))));
        var_26 = ((/* implicit */int) (unsigned short)60258);
    }
}

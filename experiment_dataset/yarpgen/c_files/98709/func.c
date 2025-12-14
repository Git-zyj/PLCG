/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98709
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
    var_12 = ((/* implicit */int) min((((/* implicit */short) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) (signed char)54))))))), (min((max(((short)-18804), (((/* implicit */short) var_4)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)18803))))), (min((var_6), (((/* implicit */unsigned int) (short)18816))))))) ? (max((max((0ULL), (((/* implicit */unsigned long long int) (short)-18804)))), (((/* implicit */unsigned long long int) (!((_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_11))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)18799)))) : ((~(((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
                    var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [(unsigned char)10] [i_2] [i_1 - 4] [i_0 - 2]))))))) ? (min(((-(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [9])) : (((/* implicit */int) arr_11 [6U] [10U] [i_1 - 4] [i_0 - 1]))))))) : (min(((-(arr_8 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        arr_16 [(unsigned short)21] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)194)), (arr_13 [(unsigned char)4] [(short)11])))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 4; i_4 < 21; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_4)))))))));
                        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_3] [i_3] [i_5 + 1] [i_3])), (arr_22 [i_4] [(signed char)14])))))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(12011729302544078010ULL)))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_4))))) ? ((~(var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)54))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_17 [i_3 - 2] [i_3 - 2] [i_5])) : (var_8)))) ? (max((var_6), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)54))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        arr_27 [i_7] [i_7 - 1] = ((/* implicit */_Bool) (~((+((~(((/* implicit */int) var_2))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min(((unsigned short)44968), (var_5))))))) ? ((~(((/* implicit */int) max(((unsigned char)180), (((/* implicit */unsigned char) var_11))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
}

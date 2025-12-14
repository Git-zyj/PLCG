/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94859
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) arr_13 [i_3 - 1] [i_1] [i_3 - 1] [i_1] [(unsigned char)14]))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-110)))))))));
                                var_17 = ((/* implicit */unsigned short) ((min(((+(var_2))), (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))) < (((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [i_0]))))));
                                var_18 = ((/* implicit */short) max((((/* implicit */int) (short)32118)), ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) (((_Bool)1) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_20 += ((/* implicit */unsigned int) ((int) arr_20 [8] [8] [i_2] [i_5 - 1] [i_6] [i_2] [i_2]));
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32118))));
                                arr_22 [i_0] [i_1] [(unsigned char)11] [i_5] [i_0] = var_9;
                                var_22 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_5] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)37))))) ^ (min((2155875879U), (((/* implicit */unsigned int) (signed char)-115))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32118))) <= (-8340019015541287660LL)))))) : (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        {
                            arr_34 [i_7] [i_10] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_9])) ? (((/* implicit */int) var_9)) : (arr_33 [i_8 + 1] [(unsigned char)17] [i_10 + 3] [i_10] [i_10] [(unsigned short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) var_10)))))) : (((unsigned int) 0LL)))))));
                            var_24 = ((/* implicit */unsigned int) ((arr_28 [i_7]) ? (max((((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1])), (((((/* implicit */int) (unsigned short)49253)) ^ (((/* implicit */int) (short)0)))))) : (((/* implicit */int) arr_26 [i_7]))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (-8340019015541287660LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1)) <= (0LL)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) : (((long long int) arr_27 [i_7 - 1] [i_7 - 1])))) / (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-13779)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21044))) : (3691289984U)))))))))));
                var_27 -= ((/* implicit */int) 0LL);
            }
        } 
    } 
    var_28 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)13740)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_6)) < (7787411188891652917LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (var_1))) * (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14068)))))));
}

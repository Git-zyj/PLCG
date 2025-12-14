/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63352
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = (!(((/* implicit */_Bool) 410873004325023526LL)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_3 - 2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_2 [i_3 + 1] [i_3 - 1] [i_3 - 3]))))) ? (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_5 [i_3 - 2] [i_3])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) var_4)))));
                            var_12 = var_6;
                        }
                    } 
                } 
                arr_12 [i_1] [0LL] [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) arr_8 [i_0] [i_0] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))) : (964460627U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (signed char i_8 = 2; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (-7867950510293666416LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [(unsigned char)2] [i_7] [11U])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7867950510293666407LL)) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_6] [i_7])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_18 [i_8 - 2])))));
                                var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_20 [13U] [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned short)63849))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(arr_25 [i_8 - 1] [i_7] [i_6 + 1] [i_5] [i_4]))))))));
                                arr_26 [i_4] [i_4] = ((((/* implicit */_Bool) 2099680209)) ? ((((+(237584861U))) + (((((/* implicit */_Bool) 134217664U)) ? (var_4) : (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((4057382432U), (var_4)))))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_18 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) < (((((-7867950510293666416LL) + (9223372036854775807LL))) << (((var_4) - (2095944348U))))))) ? (14775785399584882253ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_4] [i_4] [i_4])) != (((/* implicit */int) arr_21 [19U] [i_5] [i_4]))))))));
                var_15 = ((/* implicit */unsigned int) arr_22 [i_4] [i_4] [i_4] [(unsigned char)9]);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (unsigned short)21783))))))));
}

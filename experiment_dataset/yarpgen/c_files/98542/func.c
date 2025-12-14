/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98542
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_14))))) % (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_17))))), (((/* implicit */unsigned int) var_1))));
                                var_20 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -957830238)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)-88), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */long long int) (~(-2074520757)))) % (arr_1 [i_0 + 1]))));
                                var_21 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [10ULL] [i_4]);
                                var_22 = ((/* implicit */int) (+(min((var_2), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_2 - 2]))))));
                            }
                        } 
                    } 
                    var_23 = 1878549335U;
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((1878549335U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), ((~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1]))) : (6862877804961700319ULL))))))))));
                                var_25 = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_5] [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (3ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) -4078752257451165538LL)))));
                            var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_18))))) ? (((/* implicit */int) (unsigned short)24592)) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) (!(var_10))))));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */signed char) (_Bool)1);
                var_30 |= ((/* implicit */unsigned long long int) 1878549348U);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12; i_11 += 1) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) / (((arr_33 [i_7] [i_11 + 1] [i_11]) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_11 - 1] [i_11 - 1])))))));
                            var_32 += ((/* implicit */signed char) arr_2 [i_7]);
                            var_33 ^= ((/* implicit */unsigned int) ((131071LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))));
                        }
                    } 
                } 
            }
        } 
    } 
}

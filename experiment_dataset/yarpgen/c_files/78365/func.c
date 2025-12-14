/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78365
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) -1927270962))) ? (((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_14))) >> ((((~(1927270967))) + (1927271027))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) arr_2 [i_1]))))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) -1)))) || (((/* implicit */_Bool) arr_3 [i_0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)27643)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)60379)) : (((/* implicit */int) (unsigned short)60376)))) : (((/* implicit */int) (signed char)-22)))));
                            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)20)), ((unsigned short)5154)))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3947902412337974962LL)) ? (1450062734) : (((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)63)))))));
                            var_20 = ((/* implicit */int) var_9);
                            var_21 = ((/* implicit */signed char) arr_15 [i_1] [i_0] [i_1] [i_0] [(unsigned short)15] [i_3]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)20438)), (3216713180U))))));
                var_23 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (419414603U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))))), (var_10)));
            }
        } 
    } 
    var_24 = ((/* implicit */int) 17113546990564554683ULL);
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [i_4]))))) == (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) -970474974)) ? (8355647093258135939ULL) : (((/* implicit */unsigned long long int) 3922543023U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_4])), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)20403)))))) ? (max((((/* implicit */unsigned int) arr_6 [i_4] [i_4])), (max((arr_7 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)4691)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-16414)))))));
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) -1927270963))));
        arr_21 [i_5] = ((unsigned long long int) ((long long int) (unsigned short)45746));
        arr_22 [i_5] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)18221)) ? (((/* implicit */int) (unsigned short)39324)) : (((/* implicit */int) (unsigned char)122)))), (((/* implicit */int) ((((/* implicit */_Bool) 17011779686943376991ULL)) && (((/* implicit */_Bool) 3950585110389753428ULL)))))))) ? (((-652898100) & (((/* implicit */int) (short)-20071)))) : (((((/* implicit */_Bool) (unsigned short)60349)) ? (((/* implicit */int) (unsigned short)51229)) : (((/* implicit */int) (short)6516))))));
        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)60844)))), (arr_16 [i_5]))))));
    }
    var_29 = (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)185)) + (((/* implicit */int) (unsigned char)232))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((long long int) var_0)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63612
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
    var_17 = ((/* implicit */unsigned char) -8519959985886769292LL);
    var_18 = ((((((((/* implicit */_Bool) (short)4984)) ? (var_10) : (((/* implicit */unsigned long long int) 9223372036854775802LL)))) * (min((((/* implicit */unsigned long long int) var_4)), (70368744177663ULL))))) >> (((((/* implicit */int) var_5)) - (1460))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-22798)), (var_10))))));
                                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (min((((/* implicit */int) (unsigned char)120)), (276383181))))), ((~(arr_5 [i_3 - 3] [i_3 - 3] [i_3] [i_3 - 3])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 4; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 4058944522099312809ULL))) ? (((9328437341394159682ULL) & (((/* implicit */unsigned long long int) 211630140U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -276383199))))))) ? (((/* implicit */int) (signed char)-58)) : (-276383188)));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(arr_14 [i_0] [i_0])))) : (((long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) max((arr_4 [i_1] [i_1]), (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) (short)9821)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))) : (7436700546715886202LL))))) : (((/* implicit */long long int) var_16)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((((/* implicit */int) (short)255)), (((((/* implicit */_Bool) 1754299026U)) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) (short)273)))))) >= (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) << (((((unsigned int) arr_9 [i_1] [i_1] [(signed char)16])) - (56547U))))))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)43107), (arr_20 [i_1] [i_1 - 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2819326038U)) != (18377367077333235809ULL)))) : (((/* implicit */int) var_14))));
            }
        } 
    } 
}

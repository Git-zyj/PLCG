/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93641
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), ((unsigned short)46154)))) ? (((((/* implicit */_Bool) (unsigned short)46143)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_0 [(unsigned char)13])), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((short) ((unsigned int) arr_5 [i_0 + 2] [i_1] [i_2] [i_3 - 1])));
                            arr_10 [i_0] [(signed char)10] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(min((arr_0 [i_0 - 3]), (arr_0 [(unsigned char)9])))));
                            var_22 = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) min((var_18), (((/* implicit */unsigned short) var_12)))))))) + ((((!(((/* implicit */_Bool) arr_5 [i_0] [(short)10] [20ULL] [7ULL])))) ? ((~(8289520695902683250LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32752)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_24 = (-(var_11));
                            var_25 = ((/* implicit */_Bool) min(((~(20U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_1]))))) != (arr_1 [i_0] [i_0]))))));
                            arr_17 [(_Bool)0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_4]))) : (max((4294967276U), (((/* implicit */unsigned int) (unsigned short)19393)))))) + (var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = var_17;
    var_27 = ((/* implicit */long long int) (unsigned short)46142);
}

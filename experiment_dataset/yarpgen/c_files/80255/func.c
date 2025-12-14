/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80255
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_3))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2 - 3])))))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_0] [i_1] [i_2] [i_1])))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_0 [i_2] [i_1]), (((/* implicit */unsigned short) (signed char)14)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_16))))) : (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_8)) - (78))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1890884721)) ? (-1267816003) : (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */int) ((3377876887761639577LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1073741823U)) && (arr_6 [i_0] [i_0]))))))));
                            var_19 += ((18395173182079286753ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 4] [16LL])) ? (arr_3 [i_0] [i_2 - 4] [i_2]) : (arr_3 [i_0] [i_2 - 4] [i_2])))));
                            arr_10 [i_0] [i_3] = ((/* implicit */unsigned char) var_4);
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = (((-(15ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((13773509098139719829ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (arr_3 [(unsigned char)19] [(unsigned char)19] [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((arr_5 [i_4] [i_4] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_13)))))));
                arr_17 [i_4] [16ULL] = ((/* implicit */int) (short)48);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70348
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
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_1 + 1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)-13))))) < (((33554176U) >> (((((/* implicit */int) (short)-16887)) + (16902))))))))));
                    var_13 = var_1;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (6618766993077697886LL)))) & (((/* implicit */int) min(((short)(-32767 - 1)), (arr_6 [i_4] [i_4] [i_3])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4])))))));
                var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)41401)) > (((/* implicit */int) (signed char)-86)))))) : (((var_0) | (((/* implicit */unsigned int) arr_2 [i_3]))))));
                arr_16 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2921016044U))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (127ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (67108352) : (((/* implicit */int) (unsigned char)4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), ((unsigned char)164)))))))) : (6476474657282170573LL)));
                arr_17 [i_4] = ((/* implicit */short) ((min((((/* implicit */int) (unsigned char)19)), (arr_11 [i_4] [i_3]))) < (((/* implicit */int) ((((/* implicit */int) (short)-4111)) == (((/* implicit */int) arr_12 [i_4])))))));
            }
        } 
    } 
}

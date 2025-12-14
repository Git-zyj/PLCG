/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67627
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(unsigned char)7] [i_2] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)0] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [(short)13] [i_2] [(unsigned short)6])))), (((/* implicit */unsigned long long int) (~(arr_0 [i_2 - 2]))))));
                    var_20 = ((/* implicit */int) ((((1777201868631292873ULL) - (((/* implicit */unsigned long long int) -9187956225759392577LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) ^ (arr_3 [i_2] [i_2 + 3]))))));
                    var_21 = ((/* implicit */signed char) ((unsigned short) 9187956225759392577LL));
                    var_22 += ((/* implicit */unsigned long long int) 9187956225759392573LL);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) 9187956225759392587LL);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) (~((~(((/* implicit */int) arr_12 [i_3] [i_3]))))));
                                arr_21 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (-9187956225759392577LL) : (-2970954259303113177LL)));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)158)))) ^ ((~(((/* implicit */int) arr_2 [i_4]))))))) && (((/* implicit */_Bool) (-(-1))))));
                arr_22 [i_3] [5ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 7682042780170421532LL))) % (((/* implicit */int) arr_8 [i_3]))));
            }
        } 
    } 
    var_26 = min((((/* implicit */int) (unsigned char)50)), (var_11));
}

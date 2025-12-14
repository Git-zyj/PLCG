/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65014
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_3))))));
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) arr_4 [i_2]);
                            var_17 = ((/* implicit */unsigned int) 14982396721471537979ULL);
                            var_18 = ((/* implicit */int) arr_7 [i_3] [i_1] [17LL] [i_1 + 1]);
                            var_19 = ((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_1] [i_1 + 1]) * (arr_5 [(signed char)5] [i_1 + 3] [i_1] [i_1 + 2])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(var_11))))));
                                arr_19 [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */_Bool) min((arr_11 [(signed char)7] [i_1 - 1] [i_4]), ((signed char)53)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -484156346)) ? (1108307720798208ULL) : (18446744073709551611ULL)));
                                arr_20 [i_0] [i_1 + 2] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((289882749992510304LL) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_5 - 2] [i_4])) || (((/* implicit */_Bool) var_6))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-1437837444), (((/* implicit */int) (signed char)-27))))) || (((arr_13 [i_5 + 1] [i_1 + 2] [i_6 + 2]) || (((/* implicit */_Bool) var_4))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (arr_8 [i_9])))), (max((((((/* implicit */_Bool) var_6)) ? (-6657251298659126703LL) : (((/* implicit */long long int) arr_1 [i_8])))), (((/* implicit */long long int) min((((/* implicit */int) var_2)), (-1759879754))))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_2), (var_8)));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_9)));
}

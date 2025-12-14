/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67932
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 *= max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_2))))))), ((-((-(var_3))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [8ULL] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)87))))) > (arr_9 [i_0] [3U] [i_2] [i_3] [i_4]))))) >= ((+((+(14692709108764152849ULL)))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)105)) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)161))))), (max((15064198493094666119ULL), (15564710447612238833ULL))))) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [13U]))));
                                var_15 = ((((/* implicit */unsigned long long int) (-(arr_4 [i_2] [(_Bool)1])))) + ((-(var_3))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)10]);
                    arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)181))))))) ? (((/* implicit */unsigned long long int) ((((long long int) arr_6 [i_0] [i_0])) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : (((/* implicit */int) var_6)))))))) : (((max((((/* implicit */unsigned long long int) var_2)), (arr_11 [11U] [i_1] [10U] [(_Bool)1] [(_Bool)1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_17 &= ((/* implicit */long long int) min((min(((-(var_3))), (max((((/* implicit */unsigned long long int) var_5)), (arr_17 [i_6] [i_5]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), ((-(((/* implicit */int) (unsigned char)149)))))))));
                    var_18 *= ((/* implicit */unsigned char) min((min((((((/* implicit */int) arr_16 [i_6])) << (((/* implicit */int) arr_21 [i_6] [i_7] [i_6] [i_5])))), (((/* implicit */int) var_0)))), (((/* implicit */int) min((min((var_1), (arr_22 [i_5] [i_5] [i_5]))), (arr_22 [i_5] [i_5] [15ULL]))))));
                    var_19 &= ((/* implicit */unsigned char) (!(((_Bool) min((arr_16 [i_5]), (((/* implicit */unsigned short) arr_21 [(unsigned char)7] [i_6] [i_7] [i_7])))))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (~(var_10)));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_5)), (var_10)))))) || (var_9)));
}

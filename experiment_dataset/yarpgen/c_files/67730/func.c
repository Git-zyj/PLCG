/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67730
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_9);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-27174)) + (((/* implicit */int) ((signed char) 18282356610989291918ULL))))) - (((/* implicit */int) ((short) ((int) (unsigned char)91))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [12U] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1859314502932236275LL)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-119)))))))), (((unsigned long long int) var_0))));
                            arr_12 [i_3] = ((/* implicit */long long int) min(((short)-27174), (((/* implicit */short) arr_8 [i_0] [i_1]))));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_3 + 2]))));
                            arr_13 [i_3] = ((/* implicit */long long int) ((int) (short)27172));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min(((((_Bool)1) ? ((~(((/* implicit */int) (signed char)31)))) : (((/* implicit */int) arr_8 [i_0] [i_0])))), ((~(((/* implicit */int) (short)-32750))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((min((((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (signed char)112)))), (max((((/* implicit */int) arr_16 [i_4])), (-1701215524))))) >= (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_20 [i_4])), (arr_19 [i_4]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27174)) ? (arr_9 [i_4] [i_5] [i_5] [12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                var_14 = ((/* implicit */short) max((min((arr_5 [i_5 - 1] [i_5 + 1]), (arr_7 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1]))), (max((arr_7 [i_5] [i_5 + 1] [i_5] [i_5 + 1]), (arr_7 [i_4] [i_5 - 1] [i_5] [i_5 - 2])))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    for (signed char i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max(((unsigned char)130), (arr_8 [i_5] [i_6 + 1]))), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) (~(((0) >> (((arr_22 [i_6]) - (2828214471890142030ULL)))))))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [(_Bool)1] [i_4])) ? (((((/* implicit */long long int) var_10)) / (arr_18 [i_7] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)0]))))))))));
                            arr_27 [i_4] [i_5] [i_5] [i_6 - 1] = ((/* implicit */int) ((var_0) >> (((((((/* implicit */int) arr_24 [i_6 - 2] [i_4] [i_7 - 2] [i_7] [i_5] [i_5 - 2])) * (((/* implicit */int) arr_24 [i_6 + 1] [6ULL] [i_7 - 2] [i_7] [i_6] [i_5 - 1])))) - (1375519720)))));
                        }
                    } 
                } 
            }
        } 
    } 
}

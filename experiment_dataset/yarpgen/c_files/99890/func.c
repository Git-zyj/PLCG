/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99890
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)85)) * (((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (signed char)85))))) >> (((((/* implicit */int) var_14)) - (12839)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (4681))))) <= (((/* implicit */int) arr_3 [i_1 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (signed char)79)))))))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_1 [i_0]) + (((/* implicit */int) (unsigned short)39740)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3]))))) : (((/* implicit */int) (signed char)-81))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]), (((((/* implicit */int) (signed char)65)) * (((/* implicit */int) arr_3 [i_2 - 1])))))))));
                                arr_13 [i_0] [6] [i_4] |= ((/* implicit */int) ((min((((0ULL) << (((((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1])) - (8735))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_4] [i_4])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1])) ^ (((/* implicit */int) ((_Bool) arr_3 [i_0]))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-65)) + (2147483647))) << (((max((((((/* implicit */int) arr_3 [i_0])) + (arr_1 [i_0]))), (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 + 1] [i_2 - 1])))) - (617730458))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (unsigned char)243);
                            }
                            for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                            {
                                var_25 = ((/* implicit */int) arr_6 [i_0] [i_0]);
                                var_26 = ((/* implicit */unsigned char) min((var_26), (arr_4 [i_2] [i_3] [i_5])));
                            }
                            var_27 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])) ^ (((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_9 [i_0] [i_2])))))) ^ (((/* implicit */int) min((arr_4 [i_2] [i_2 - 1] [i_1 + 1]), (arr_4 [i_2] [i_2 - 1] [i_1 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) max((((_Bool) var_7)), (((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_1))))))) <= (((((((/* implicit */int) var_11)) * (((/* implicit */int) var_0)))) / (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 20; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) arr_22 [i_7])) - (((/* implicit */int) ((arr_6 [i_6] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))))))) && (((/* implicit */_Bool) (unsigned short)3))));
                var_30 |= ((((/* implicit */int) arr_9 [i_6] [i_7])) + (arr_20 [(signed char)16]));
            }
        } 
    } 
}

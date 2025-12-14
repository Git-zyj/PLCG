/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80578
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = max((((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) <= (((/* implicit */int) arr_2 [i_0 + 2] [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0 + 4] [i_1])) && (((/* implicit */_Bool) var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (arr_8 [i_3 - 1] [i_3] [i_1] [i_1] [(unsigned char)16] [i_3]))));
                            var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) max((arr_8 [6] [(_Bool)1] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_3 + 1] [i_2 - 1])), ((unsigned short)26130)))) ? (((/* implicit */int) max((arr_5 [i_1] [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)9))))) : (((/* implicit */int) (signed char)-123))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-4)) & (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)39406))))), (min(((short)7026), (((/* implicit */short) (signed char)3)))))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-9), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (arr_11 [i_4])))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) 2790190130U))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_10);
                            var_25 = ((/* implicit */unsigned short) var_7);
                            var_26 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)5)) >> ((((((-2147483647 - 1)) - (-2147483617))) + (37)))))), (274877906942LL))) * (arr_16 [i_4] [i_4] [i_4])));
                            arr_19 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7] [3LL] [i_7 + 1])) ? ((-(130816U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)39433), (arr_17 [i_4] [i_5] [i_6] [i_7])))))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) max((min(((unsigned short)26130), (var_16))), (arr_17 [i_7] [i_7 + 1] [i_7] [i_7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

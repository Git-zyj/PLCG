/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73942
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_3) * (0U)))), (((((/* implicit */_Bool) (unsigned char)16)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1] [i_1]))) : (((/* implicit */int) (!(arr_0 [i_0]))))));
                var_12 = ((/* implicit */long long int) (+(max((((/* implicit */int) (short)2047)), (arr_2 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((arr_2 [5U] [i_2 - 1] [i_2]), (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 2])))), (var_10)));
                            var_13 = ((/* implicit */unsigned char) var_0);
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_11))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (-(min((arr_6 [0U] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)154)) & (((/* implicit */int) (unsigned char)16)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (unsigned char)17);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_11))))))) == (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)239)) | (var_10)))), (var_3)))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(var_6)));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 ^= ((((int) arr_2 [i_5 - 1] [i_5 - 1] [i_5])) > (max(((-(-1852666706))), (((/* implicit */int) arr_7 [i_5 - 3] [i_4] [i_7] [i_6] [i_5])))));
                            var_19 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_9)) ? (arr_6 [(_Bool)1] [i_5] [i_4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))))), (((/* implicit */unsigned long long int) arr_22 [i_5 - 2] [i_5 - 2])))), (((/* implicit */unsigned long long int) arr_21 [i_7] [i_6] [i_4] [i_4]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((((unsigned int) arr_13 [i_5 - 1] [i_4])), (((/* implicit */unsigned int) ((((var_11) || (((/* implicit */_Bool) var_9)))) ? (((var_11) ? (((/* implicit */int) (unsigned short)20700)) : (((/* implicit */int) (unsigned short)11034)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3057738749662429451ULL))))))))));
                var_21 = ((/* implicit */short) max((var_6), (((/* implicit */long long int) ((_Bool) arr_16 [i_4] [i_4])))));
            }
        } 
    } 
}

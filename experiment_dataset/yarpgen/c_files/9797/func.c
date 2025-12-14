/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9797
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) (short)-12)), (-384462255))), (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)12))))))), (min((min((((/* implicit */unsigned long long int) var_4)), (var_7))), (((/* implicit */unsigned long long int) max(((signed char)127), ((signed char)(-127 - 1))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) max((min((max((var_0), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_3 [(_Bool)1] [2U])), (arr_0 [10LL])))))), (((/* implicit */unsigned long long int) max(((short)-12), (((/* implicit */short) (_Bool)1)))))));
                arr_4 [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) min((arr_2 [i_1] [i_0]), (((/* implicit */signed char) (_Bool)1))))), (min(((short)7), (((/* implicit */short) arr_2 [i_0] [i_0]))))))), (max((min((2260100706646226703ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            {
                var_13 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((_Bool)1), (var_6)))), (max((var_10), (((/* implicit */long long int) (short)-12))))))), (min((max((((/* implicit */unsigned long long int) (short)15738)), (var_7))), (((/* implicit */unsigned long long int) min((arr_8 [22LL]), (((/* implicit */long long int) (unsigned short)960)))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */long long int) min((max((arr_6 [i_2] [i_3]), (((/* implicit */unsigned int) arr_5 [(unsigned char)15])))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))), (max((max((((/* implicit */long long int) var_2)), (arr_8 [(signed char)20]))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)11)))))))))));
            }
        } 
    } 
}

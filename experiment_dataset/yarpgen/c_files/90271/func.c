/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90271
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [16] [4] [4] = ((/* implicit */unsigned short) ((unsigned char) (signed char)-90));
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((int) -1387509405)), ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [16])) : (((/* implicit */int) arr_5 [i_2] [5ULL] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)12735)), (255U)));
            var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12735)) * (((/* implicit */int) (signed char)-8))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (10ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)203)) >= (1387509388))))))));
            var_16 = (unsigned short)12727;
            var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 1387509369)) || (((/* implicit */_Bool) (unsigned short)12739))));
        }
        arr_17 [i_3] = ((((/* implicit */_Bool) (unsigned short)21)) ? (((unsigned int) (unsigned char)96)) : (((/* implicit */unsigned int) 1387509405)));
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)52801)), (2147483647))))));
                    var_19 = ((/* implicit */int) arr_15 [i_3]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3163318816U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)224))));
    var_21 = ((/* implicit */unsigned char) ((var_2) && (((/* implicit */_Bool) ((long long int) (unsigned short)12722)))));
}

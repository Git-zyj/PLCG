/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98334
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
    var_13 = ((/* implicit */short) (((~(((long long int) 2147483647)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+(((/* implicit */int) (unsigned short)3694)))))))));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (15179320692317166572ULL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)35131)))), (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max(((+(arr_5 [i_0]))), (((/* implicit */long long int) (short)18175))));
                            var_18 = ((/* implicit */signed char) ((-3547172390484554500LL) < (((/* implicit */long long int) 2447508493U))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_22 [i_0] = ((/* implicit */unsigned short) var_6);
                            arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [i_0] [i_7] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) max(((unsigned char)204), (((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((-(arr_1 [i_7] [i_0])))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_19 [i_0] [i_1] [i_5] [i_1] [i_6])))));
                            arr_24 [i_0] [i_1] [i_5] [i_0] [i_7] = (unsigned char)234;
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */long long int) 3041261879U);
            arr_25 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (signed char)32)))));
            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_16 [i_0])))) ? (max((4294967277U), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)48566)) == (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)22716)) : (1433252)))))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94338
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
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */int) (unsigned short)110)) : (((/* implicit */int) (unsigned char)104))))) ? ((~(-735766131))) : ((~(((/* implicit */int) (unsigned short)56177)))))), (((/* implicit */int) var_5))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 = arr_3 [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7548)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) 1001315893);
                        var_20 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1 - 1] [i_3 + 2]) << (((arr_5 [i_1 - 1] [i_1 + 2] [i_3 - 1]) - (2464039474942750613ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (~(((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)52))))));
                            var_22 = ((/* implicit */_Bool) ((long long int) arr_11 [i_3 - 2] [i_3 + 2] [i_1 - 1]));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_23 = (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_7))))));
                            var_24 = ((/* implicit */long long int) ((unsigned int) ((signed char) arr_12 [i_5] [i_3 + 1] [i_2] [i_1 + 1] [i_1 + 2] [i_0])));
                            var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) arr_6 [i_1 + 1] [i_3 - 2] [i_3 - 2]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((int) arr_13 [i_6] [i_6] [i_3 - 1] [i_2] [i_1 + 3] [i_1 + 3] [i_0]));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 3] [i_1 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1] [i_3 - 1])) : (((/* implicit */int) var_9))));
                            var_28 = ((/* implicit */int) 15703077224356707244ULL);
                            var_29 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (short)3357)))) + (2147483647))) << (((((arr_14 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_2] [i_1 + 2] [i_1 + 1]) + (9090460970724235055LL))) - (30LL)))));
                            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)21845))));
                        }
                        var_31 = ((/* implicit */_Bool) (~(arr_0 [i_3 - 1] [i_1 + 3])));
                        var_32 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)121)) ? (8599363275700607732LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_33 = ((/* implicit */signed char) (+(-323060960)));
        var_34 = ((/* implicit */unsigned long long int) ((17101655015231259831ULL) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) * (16636406304444748016ULL)))));
        var_35 += ((/* implicit */unsigned short) ((long long int) arr_20 [i_7]));
        var_36 = ((/* implicit */signed char) ((unsigned short) arr_19 [i_7]));
    }
    var_37 = ((/* implicit */long long int) ((signed char) (!(((_Bool) 8599363275700607748LL)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75778
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2915826797U)) : (18446744073709551611ULL))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) < (3683138915916692640LL))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1323830387583361351ULL)) ? (3893247321136410936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))))) : (((/* implicit */int) ((unsigned char) ((short) 347321304U))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((short) 3683138915916692620LL))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21895)) ? (1177268565U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)43)) >> (((10640683587949475471ULL) - (10640683587949475471ULL)))))) : (-3683138915916692621LL)));
            var_21 -= ((short) 4741433377840206346ULL);
            arr_7 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [i_0]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_2))));
            arr_10 [i_0] = ((/* implicit */int) max((((unsigned long long int) ((long long int) arr_8 [i_2] [i_0] [(short)10]))), (((/* implicit */unsigned long long int) ((arr_4 [i_0 + 2] [i_0 + 2] [i_0]) & (arr_4 [i_0 - 1] [i_2] [i_0]))))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_2])) : (357909149U))))), (((max((16728270679564612711ULL), (var_18))) << (((((arr_8 [i_0] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_2] [8LL])) : (((/* implicit */int) arr_3 [i_2])))) - (16204))))))))));
        }
        for (short i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            arr_14 [i_0 + 2] [i_3] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [i_0]));
            var_24 -= (~(3947645991U));
        }
        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            arr_17 [i_0 + 1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_9 [i_0] [i_0 + 1] [i_4 + 1]) & (((/* implicit */int) arr_15 [i_4 - 1])))) : (min(((+(((/* implicit */int) arr_8 [i_0] [i_0] [(short)5])))), ((-(((/* implicit */int) arr_1 [i_0 + 2])))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) min((arr_4 [i_0 + 3] [i_0 + 3] [(signed char)0]), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 6)) ? (7799025722589441635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11026))) * (3117698721U))))))));
        }
    }
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) arr_18 [i_5])) + (877))) - (17)))))) > (var_17)));
        var_26 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (var_18) : (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5])))), (((/* implicit */unsigned long long int) arr_11 [i_5 - 1] [i_5 + 1]))))));
    }
    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
    {
        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18)) ? (((/* implicit */int) (short)-729)) : (2002971093)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)16)), (11U)))) : (((((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) 3117698715U)) : (13705310695869345285ULL))) * (((/* implicit */unsigned long long int) max((arr_5 [i_6]), (((/* implicit */int) (short)-461)))))))));
        var_28 = ((/* implicit */short) arr_5 [i_6]);
    }
    var_29 = ((/* implicit */signed char) min((var_29), (var_8)));
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (short)32762))) ? (((/* implicit */int) (short)-23537)) : (((/* implicit */int) ((((((/* implicit */int) (short)127)) << (((7799025722589441628ULL) - (7799025722589441605ULL))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) 347321299U)) < (12ULL))))))))))));
    var_31 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_18))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))));
}
